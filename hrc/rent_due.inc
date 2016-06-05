<?php

//get lease info, message info, and build rent due node
function new_rd($rdType,$leaseNid){
	$t1 = new hrc_terms();
	$hrcTerms = $t1->main();
	//@todo - need to put watchdog here and return failed to send message
	if($hrcTerms['zeros'] == 0) return;

	$s1 = new hrc_settings();
	$hrcSettings = $s1->hrc_settings();
	//@todo - need to put watchdog here and return failed to send message
	if(!isset($hrcSettings['twilio_phone']['value'])) return;

	//@todo - return failed to send message because too soon
	if(check_last_message_time($leaseNid,$hrcSettings) == 1) return;

	$rdInfo['rd_type'] = $rdType;

	switch($rdType){
		case 1:
			$rdInfo['message_category'] = $hrcTerms['message_categories']['rent due 1'];
			break;
		case 2:
			$rdInfo['message_category'] = $hrcTerms['message_categories']['rent due 2'];
			break;
		case 3:
			$rdInfo['message_category'] = $hrcTerms['message_categories']['rent due 3'];
			break;			
	}

	$rdInfo['lease_nid'] = $leaseNid;

	$rdInfo = get_lease_info($rdInfo);
	//@todo - return failed to send message because no property address
	if(!isset($rdInfo['address'])) return;

	$rdInfo = get_rd_message($rdInfo,$hrcSettings);
	//@todo - return failed to send message because no message
	if(!isset($rdInfo['rd_sms'])) return;

	$rdNode = rd_node($rdInfo,$hrcTerms);

	if(isset($rdNode->nid)) echo 'message' . $rdNode->nid;
}




function check_last_message_time($leaseNid,$hrcSettings){
	$sql = 	"select			n.nid as messageNid,
							n.created as timeSent,
							c_message.field_customer_target_id as customer
			from 			field_data_field_property p
			join			field_data_field_customer c_lease on c_lease.entity_id = p.entity_id
			join			field_data_field_customer c_message on c_message.field_customer_target_id = c_lease.field_customer_target_id
			join			node n on n.nid = c_message.entity_id
			where			c_message.bundle = 'message'
			and				n.created > :forty8Hours
			and				p.entity_id = :leaseNid
			order by		n.created desc";
			
	$forty8Hours = time() - ($hrcSettings['min_time_between_rent_due']['value']*60*60);
	$args = array(	':leaseNid' => $leaseNid,
					':forty8Hours' => $forty8Hours);
	$results = db_query($sql,$args)->fetchAssoc();

	if(isset($results['timeSent'])) return 1;

	return 0;
}




function get_lease_info($rdInfo){
	$sql = 	"select			a.field_address_thoroughfare as address,
							pmt.field_payment_value as rent,
							lf.field_late_fee_value as late_fee,
							m.field_mobile_value as mobile,
							c.field_customer_target_id as customer
			from 			field_data_field_property p
			left join		field_data_field_address a on a.entity_id = p.field_property_target_id
			left join		field_data_field_payment pmt on pmt.entity_id = p.entity_id
			left join		field_data_field_late_fee lf on lf.entity_id = p.entity_id
			left join		field_data_field_customer c on c.entity_id = p.entity_id
			left join		field_data_field_mobile m on m.entity_id = c.field_customer_target_id
			where			p.entity_id = :leaseNid";

	$args = array(':leaseNid' => $rdInfo['lease_nid']);
 	$leaseInfo = db_query($sql,$args)->fetchAssoc();

	$rdInfo['address'] = $leaseInfo['address'];
	$rdInfo['rent'] = $leaseInfo['rent'];
	$rdInfo['late_fee'] = $leaseInfo['late_fee'];
	$rdInfo['mobile'] = $leaseInfo['mobile'];
	$rdInfo['customer'] = $leaseInfo['customer'];

return $rdInfo;
}




function get_rd_message($rdInfo,$hrcSettings){
//@todo - need to put the rd2 and rd3 messages here as well
//@todo - need to make the message text user adjustable

	switch($rdInfo['rd_type']){
		case 1:
			$rdInfo['rd_sms'] = "Hello, this is your payment reminder for " . $rdInfo['address'] . 
								". Your rent of $" . $rdInfo['rent'] . " is due by the 1st. " . 
								"Please deposit cash or m/o to DHC LLC Acct #10032811 at Community " .
								"Bank & Trust. Late fee of $" . $rdInfo['late_fee'] . " applies " .
								"after the 5th. Text your name/address/amount you paid to " .
								format_phone($hrcSettings['twilio_phone']['value']) . 
								" so we know you paid! Thank you.";
			break;
		case 2:
			$rdInfo['rd_sms'] = "Hello, this is your payment reminder for " . $rdInfo['address'] . 
								". Your rent of $" . $rdInfo['rent'] . " is due by the 1st. " . 
								"Please deposit cash or m/o to DHC LLC Acct #10032811 at Community " .
								"Bank & Trust. Late fee of $" . $rdInfo['late_fee'] . " applies " .
								"after the 5th. Text your name/address/amount you paid to " .
								format_phone($hrcSettings['twilio_phone']['value']) . 
								" so we know you paid! Thank you.";
			break;
		case 3:
			$rdInfo['rd_sms'] = "Hello, this is your payment reminder for " . $rdInfo['address'] . 
								". Your rent of $" . $rdInfo['rent'] . " is due by the 1st. " . 
								"Please deposit cash or m/o to DHC LLC Acct #10032811 at Community " .
								"Bank & Trust. Late fee of $" . $rdInfo['late_fee'] . " applies " .
								"after the 5th. Text your name/address/amount you paid to " .
								format_phone($hrcSettings['twilio_phone']['value']) . 
								" so we know you paid! Thank you.";
			break;			
	}

return $rdInfo;
}




function rd_node($rdInfo,$hrcTerms){
global $user;

	$jnode = new stdClass();
	$jnode->type = 'message';
	$jnode->title = 'rent due ' . $rdInfo['rd_type'];
	$jnode->field_message_type['und'][0]['tid'] = $hrcTerms['message_types']['outgoing'];
	$jnode->field_message_category['und'][0]['tid'] = $rdInfo['message_category'];
	$jnode->field_customer['und'][0]['target_id'] = $rdInfo['customer'];
	$jnode->field_sms['und'][0]['value'] = $rdInfo['rd_sms'];
	$jnode->field_mobile['und'][0]['value'] = preg_replace('/[^0-9]/','',$rdInfo['mobile']);
	$jnode->status = 1;
	$jnode->uid = $user->uid;  
	$jnode = node_submit($jnode); // Prepare node for saving
	node_save($jnode);
return $jnode;
}




function format_phone($cell){
	$cell = preg_replace('/[^0-9]/','',$cell);

	if(is_numeric($cell) && strlen($cell) == 10){
		$area = substr($cell,0,3);
		$exch = substr($cell,3,3);
		$four = substr($cell,6,4);
		$cell = '(' . $area . ') ' . $exch . '-' . $four;
	}
return $cell;
}
