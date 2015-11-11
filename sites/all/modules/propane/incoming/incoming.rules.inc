<?php

/**
 * Implements hook_rules_action_info().
 */
function incoming_rules_action_info() {
$items = array('incoming_action_notice' => array( 

  'label' => t('Create notice node upon incoming SMS/MMS'),
  'group' => t('Propane'),
  'parameter' => array(
    'number' => array(
    'type' => 'text',
    'label' => t('Number'),
        ),  
    'message' => array(
    'type' => 'text',
    'label' => t('Message'),
        ),
    'media' => array(
    'type' => 'text',
    'label' => t('Media (MMS)'),
        ),
  ),
  )
  );
return $items;
}


/**
 * Creates a new notice node upon an incoming SMS/MMS from Twilio
 */
function incoming_action_notice($number,$message,$media){

  // Check if there is a user with the mobile number
  preg_match('/(\d{3})(\d{3})(\d{4})/',$number,$match);
  $number_formatted = '(' . $match[1] . ') ' . $match[2] . '-' . $match[3];
  
  $user_exists = db_query('SELECT entity_id FROM {field_data_field_mobile} where field_mobile_value = :mobile', array(':mobile' => $number_formatted));
  $array_user_exists = $user_exists->fetchAssoc();
  $uid = 1;
  if ($array_user_exists) {
    $uid = $array_user_exists['entity_id'];
  }

  
  // Check if node has already been created for this user in the last 15 seconds
  $toosoon = time() - 15;
  $node_exists = db_query('SELECT nid FROM {node} where uid = :uid and created > :toosoon', array(':uid' => $uid, ':toosoon' => $toosoon));
  $array_node_exists = $node_exists->fetchAssoc();
  if ($array_node_exists) {
	return;
  }

  
  // Create the  node
  $notice_node = new stdClass();
  $notice_node->title = 'incoming';
  $notice_node->type = 'notice';
  node_object_prepare($notice_node);
  $notice_node->language = LANGUAGE_NONE;
  $notice_node->uid = $uid;
  $notice_node->field_date_notice['und'][0]['value'] = date(Ymd);
  $notice_node->field_in_out_notice['und'][0]['tid'] = 36;
  $notice_node->field_customer_lease['und'][0]['target_id'] = $uid;
  $notice_node->field_message['und'][0]['value'] = $message;
  node_save($notice_node);
}
