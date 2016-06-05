<?php
/**
 * @file
 * heyrental_setup.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function heyrental_setup_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'incoming',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0e81b44b-8937-4ed4-b9b7-2d38480c2cc9',
    'vocabulary_machine_name' => 'message_types',
  );
  $terms[] = array(
    'name' => 'insurance',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '144b6052-e740-4a20-9aa0-dd6d234bc2ca',
    'vocabulary_machine_name' => 'entry_categories',
  );
  $terms[] = array(
    'name' => 'rent due 1',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1a8f371f-949c-41f7-8100-f5f37ff5d508',
    'vocabulary_machine_name' => 'message_categories',
  );
  $terms[] = array(
    'name' => 'customer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '230457ee-7f85-42cc-af4f-4d0c66a0d425',
    'vocabulary_machine_name' => 'person_types',
  );
  $terms[] = array(
    'name' => 'vacate',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '30a54b2c-73f9-4869-9007-d6bf5ed58f9a',
    'vocabulary_machine_name' => 'message_categories',
  );
  $terms[] = array(
    'name' => 'buyside',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '365a940a-eb10-4180-8b2d-35987f9b2bf4',
    'vocabulary_machine_name' => 'entry_categories',
  );
  $terms[] = array(
    'name' => 'utilities',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '491382c8-61f5-4407-8df8-65ee6e768795',
    'vocabulary_machine_name' => 'entry_categories',
  );
  $terms[] = array(
    'name' => '6mo lease',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '507de67f-9e1a-487a-bdf0-d9eeec6a5aec',
    'vocabulary_machine_name' => 'lease_types',
  );
  $terms[] = array(
    'name' => '3mo lease',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '516d4767-188d-4787-b7d9-6107e1c74d1d',
    'vocabulary_machine_name' => 'lease_types',
  );
  $terms[] = array(
    'name' => 'misc',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '67036eb8-825b-4597-ab23-a33bed17c278',
    'vocabulary_machine_name' => 'entry_categories',
  );
  $terms[] = array(
    'name' => 'manager',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6a3a8410-ee0f-421f-9bfb-bcbdd8b5302b',
    'vocabulary_machine_name' => 'person_types',
  );
  $terms[] = array(
    'name' => 'rent due 3',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '71d6493c-bee9-414b-8611-b62a52f78477',
    'vocabulary_machine_name' => 'message_categories',
  );
  $terms[] = array(
    'name' => 'property purchase or sale',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '880dadc6-6fb6-46f6-b519-dad3be4f2e79',
    'vocabulary_machine_name' => 'entry_categories',
  );
  $terms[] = array(
    'name' => 'payment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '89b4f7d1-fdc2-4041-b0b4-64a17b0bef49',
    'vocabulary_machine_name' => 'message_categories',
  );
  $terms[] = array(
    'name' => 'outgoing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '974d4e33-b9a4-4e8e-ac0b-372ea53a0abf',
    'vocabulary_machine_name' => 'message_types',
  );
  $terms[] = array(
    'name' => 'management',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a5ed569a-6158-46c6-9b30-6bec8ee10367',
    'vocabulary_machine_name' => 'entry_categories',
  );
  $terms[] = array(
    'name' => 'note payment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b9591927-dfdd-4b0f-a47b-3d4c76db68b4',
    'vocabulary_machine_name' => 'entry_categories',
  );
  $terms[] = array(
    'name' => 'application',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd05e9b6c-8c27-405a-992b-9d7e5a964d64',
    'vocabulary_machine_name' => 'message_categories',
  );
  $terms[] = array(
    'name' => 'maintenance',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd26f678e-d85e-470a-81a2-63f326834c5a',
    'vocabulary_machine_name' => 'entry_categories',
  );
  $terms[] = array(
    'name' => 'late fee',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dc9ac01e-7f45-45b8-a55e-9e9c5f5774ef',
    'vocabulary_machine_name' => 'entry_categories',
  );
  $terms[] = array(
    'name' => 'rent',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'df9e1da7-99c0-461d-aac8-3c15decf696a',
    'vocabulary_machine_name' => 'entry_categories',
  );
  $terms[] = array(
    'name' => 'maintenance',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e550351b-2ccd-490c-9c65-b3c9f9f977bc',
    'vocabulary_machine_name' => 'message_categories',
  );
  $terms[] = array(
    'name' => 'income',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ee13e50c-4b95-437b-9574-18827e4a6197',
    'vocabulary_machine_name' => 'entry_types',
  );
  $terms[] = array(
    'name' => 'expense',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ee904354-309f-4af3-87f0-fcb37a05ddbc',
    'vocabulary_machine_name' => 'entry_types',
  );
  $terms[] = array(
    'name' => 'rent due 2',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f20226f1-ecd7-4ac5-b5e0-dd2f2c35001d',
    'vocabulary_machine_name' => 'message_categories',
  );
  $terms[] = array(
    'name' => 'tax',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f825bd5f-d04f-49f1-b138-6847bfe4b52e',
    'vocabulary_machine_name' => 'entry_categories',
  );
  return $terms;
}
