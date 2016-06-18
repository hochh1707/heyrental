<?php

function hrc_twilio_sms_incoming($smsInfo){
	$t1 = new hrc_terms();
	$hrcTerms = $t1->main();
	//@todo - need to put watchdog here and return failed to send message
	if($hrcTerms['zeros'] == 0) return;
	
	$smsInfo = get_message_category($smsInfo,$hrcTerms);
	$smsInfo = get_customer_nid($smsInfo);
	
	incoming_message_node($smsInfo,$hrcTerms);
}

function get_message_category($smsInfo,$hrcTerms){
	//@todo - Add logic to figure out if it is a maintenance request or a 
	//message telling us they paid rent, or other.
	//But for now we will assume it is a payment
	$smsInfo['message_category'] = $hrcTerms['message_categories']['payment'];

return $smsInfo;
}

function get_customer_nid($smsInfo){
	//@todo - Get customer nid from phone number that the message came from
	
	$sql = 	"select		entity_id as customer_nid
			from		field_data_field_mobile
			where		bundle = 'person'
			and			field_mobile_value = :mobile";
	
	//Phone number are formatted as (555) 111-2222 for all nodes except messages
	$mobile_formatted = '(' . substr($smsInfo['number'],0,3) . ') ' . 
						substr($smsInfo['number'],3,3) . '-' . 
						substr($smsInfo['number'],6,4);
	//$mobile_formatted = '(512) 211-5555';
	$args = array(':mobile' => $mobile_formatted);
	$results = db_query($sql,$args)->fetchAssoc();

	if(!isset($results['customer_nid'])){		
		$smsInfo['customer'] = 1;
		return $smsInfo;
	}
	
	$smsInfo['customer'] = $results['customer_nid'];

return $smsInfo;
}

function incoming_message_node($smsInfo,$hrcTerms){
	$jnode = new stdClass();
	$jnode->type = 'message';
	$jnode->title = 'Incoming message';
	$jnode->field_message_type['und'][0]['tid'] = $hrcTerms['message_types']['incoming'];
	$jnode->field_message_category['und'][0]['tid'] = $smsInfo['message_category'];
	$jnode->field_customer['und'][0]['target_id'] = $smsInfo['customer'];
	$jnode->field_sms['und'][0]['value'] = $smsInfo['message'];
	$jnode->field_mms['und'][0]['value'] = $smsInfo['media'];
	$jnode->field_mobile['und'][0]['value'] = preg_replace('/[^0-9]/','',$smsInfo['number']);
	$jnode->status = 1;
	$jnode->uid = 1;
	$jnode = node_submit($jnode); // Prepare node for saving
	node_save($jnode);
}
