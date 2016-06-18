<?php
/**
 * @file
 * heyrental_setup.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function heyrental_setup_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_properties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'my properties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'my properties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
	4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_address_thoroughfare' => 'field_address_thoroughfare',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_payment' => 'field_payment',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_thoroughfare' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_payment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href = \'hrc/newprop\'>Click here to enter a new property and tenant</a>';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_property_node']['id'] = 'reverse_field_property_node';
  $handler->display->display_options['relationships']['reverse_field_property_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_property_node']['field'] = 'reverse_field_property_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_target_id']['id'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['table'] = 'field_data_field_customer';
  $handler->display->display_options['relationships']['field_customer_target_id']['field'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['relationship'] = 'reverse_field_property_node';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Property';
  $handler->display->display_options['fields']['field_address_thoroughfare']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['alter']['path'] = '/prop/[nid]';
  $handler->display->display_options['fields']['field_address_thoroughfare']['alter']['target'] = '_blank';
  /* Field: Content: first name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Tenant';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['empty'] = '-';
  /* Field: Content: payment */
  $handler->display->display_options['fields']['field_payment']['id'] = 'field_payment';
  $handler->display->display_options['fields']['field_payment']['table'] = 'field_data_field_payment';
  $handler->display->display_options['fields']['field_payment']['field'] = 'field_payment';
  $handler->display->display_options['fields']['field_payment']['relationship'] = 'reverse_field_property_node';
  $handler->display->display_options['fields']['field_payment']['label'] = 'Rent';
  $handler->display->display_options['fields']['field_payment']['empty'] = '-';
  $handler->display->display_options['fields']['field_payment']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'property' => 'property',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-properties';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My properties';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-view-my';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['my_properties'] = $view;

  $view = new view();
  $view->name = 'my_rent_due_messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'my rent due messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My rent due messages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
	4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_target_id']['id'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['table'] = 'field_data_field_customer';
  $handler->display->display_options['relationships']['field_customer_target_id']['field'] = 'field_customer_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_customer_node']['id'] = 'reverse_field_customer_node';
  $handler->display->display_options['relationships']['reverse_field_customer_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_customer_node']['field'] = 'reverse_field_customer_node';
  $handler->display->display_options['relationships']['reverse_field_customer_node']['relationship'] = 'field_customer_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_property_target_id']['id'] = 'field_property_target_id';
  $handler->display->display_options['relationships']['field_property_target_id']['table'] = 'field_data_field_property';
  $handler->display->display_options['relationships']['field_property_target_id']['field'] = 'field_property_target_id';
  $handler->display->display_options['relationships']['field_property_target_id']['relationship'] = 'reverse_field_customer_node';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Sent on';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: first name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  /* Field: Content: address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'field_property_target_id';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'property';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'message' => 'message',
  );
  /* Filter criterion: Content: address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['filters']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['filters']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['filters']['field_address_thoroughfare']['relationship'] = 'field_property_target_id';
  $handler->display->display_options['filters']['field_address_thoroughfare']['operator'] = 'not empty';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-rent-due-messages';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My rent due messages';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-view-my';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['my_rent_due_messages'] = $view;

  $view = new view();
  $view->name = 'property';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'property';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'property';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
	4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'editableviews_unformatted';
  $handler->display->display_options['style_options']['relationship_creation_bundle'] = array(
    'field_customer_target_id' => 'person',
    'reverse_field_property_node' => 'lease',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_property_node']['id'] = 'reverse_field_property_node';
  $handler->display->display_options['relationships']['reverse_field_property_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_property_node']['field'] = 'reverse_field_property_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_target_id']['id'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['table'] = 'field_data_field_customer';
  $handler->display->display_options['relationships']['field_customer_target_id']['field'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['relationship'] = 'reverse_field_property_node';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: address (editable) */
  $handler->display->display_options['fields']['field_address_editable']['id'] = 'field_address_editable';
  $handler->display->display_options['fields']['field_address_editable']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_editable']['field'] = 'field_address_editable';
  $handler->display->display_options['fields']['field_address_editable']['label'] = '';
  $handler->display->display_options['fields']['field_address_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_editable']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_editable']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_address_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_address_editable']['suppress_description'] = 0;
  /* Field: Content: first name (editable) */
  $handler->display->display_options['fields']['field_first_name_editable']['id'] = 'field_first_name_editable';
  $handler->display->display_options['fields']['field_first_name_editable']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_editable']['field'] = 'field_first_name_editable';
  $handler->display->display_options['fields']['field_first_name_editable']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_first_name_editable']['label'] = '';
  $handler->display->display_options['fields']['field_first_name_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_first_name_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_first_name_editable']['suppress_description'] = 0;
  /* Field: Content: last name (editable) */
  $handler->display->display_options['fields']['field_last_name_editable']['id'] = 'field_last_name_editable';
  $handler->display->display_options['fields']['field_last_name_editable']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_editable']['field'] = 'field_last_name_editable';
  $handler->display->display_options['fields']['field_last_name_editable']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_last_name_editable']['label'] = '';
  $handler->display->display_options['fields']['field_last_name_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_last_name_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_last_name_editable']['suppress_description'] = 0;
  /* Field: Content: email (editable) */
  $handler->display->display_options['fields']['field_email_editable']['id'] = 'field_email_editable';
  $handler->display->display_options['fields']['field_email_editable']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email_editable']['field'] = 'field_email_editable';
  $handler->display->display_options['fields']['field_email_editable']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_email_editable']['label'] = '';
  $handler->display->display_options['fields']['field_email_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_email_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_email_editable']['suppress_description'] = 0;
  /* Field: Content: mobile (editable) */
  $handler->display->display_options['fields']['field_mobile_editable']['id'] = 'field_mobile_editable';
  $handler->display->display_options['fields']['field_mobile_editable']['table'] = 'field_data_field_mobile';
  $handler->display->display_options['fields']['field_mobile_editable']['field'] = 'field_mobile_editable';
  $handler->display->display_options['fields']['field_mobile_editable']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_mobile_editable']['label'] = '';
  $handler->display->display_options['fields']['field_mobile_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mobile_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_mobile_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_mobile_editable']['suppress_description'] = 0;
  /* Field: Content: person type (editable) */
  $handler->display->display_options['fields']['field_person_type_editable']['id'] = 'field_person_type_editable';
  $handler->display->display_options['fields']['field_person_type_editable']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['fields']['field_person_type_editable']['field'] = 'field_person_type_editable';
  $handler->display->display_options['fields']['field_person_type_editable']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_person_type_editable']['label'] = '';
  $handler->display->display_options['fields']['field_person_type_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_type_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_person_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_person_type_editable']['suppress_description'] = 0;
  /* Field: Content: date (editable) */
  $handler->display->display_options['fields']['field_date_editable']['id'] = 'field_date_editable';
  $handler->display->display_options['fields']['field_date_editable']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_editable']['field'] = 'field_date_editable';
  $handler->display->display_options['fields']['field_date_editable']['relationship'] = 'reverse_field_property_node';
  $handler->display->display_options['fields']['field_date_editable']['label'] = '';
  $handler->display->display_options['fields']['field_date_editable']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_editable']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_date_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_date_editable']['suppress_description'] = 0;
  /* Field: Content: payment (editable) */
  $handler->display->display_options['fields']['field_payment_editable']['id'] = 'field_payment_editable';
  $handler->display->display_options['fields']['field_payment_editable']['table'] = 'field_data_field_payment';
  $handler->display->display_options['fields']['field_payment_editable']['field'] = 'field_payment_editable';
  $handler->display->display_options['fields']['field_payment_editable']['relationship'] = 'reverse_field_property_node';
  $handler->display->display_options['fields']['field_payment_editable']['label'] = '';
  $handler->display->display_options['fields']['field_payment_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_payment_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_payment_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_payment_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_payment_editable']['suppress_description'] = 0;
  /* Field: Content: due date (editable) */
  $handler->display->display_options['fields']['field_due_date_editable']['id'] = 'field_due_date_editable';
  $handler->display->display_options['fields']['field_due_date_editable']['table'] = 'field_data_field_due_date';
  $handler->display->display_options['fields']['field_due_date_editable']['field'] = 'field_due_date_editable';
  $handler->display->display_options['fields']['field_due_date_editable']['relationship'] = 'reverse_field_property_node';
  $handler->display->display_options['fields']['field_due_date_editable']['label'] = '';
  $handler->display->display_options['fields']['field_due_date_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_due_date_editable']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_due_date_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_due_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_due_date_editable']['suppress_description'] = 0;
  /* Field: Content: late fee (editable) */
  $handler->display->display_options['fields']['field_late_fee_editable']['id'] = 'field_late_fee_editable';
  $handler->display->display_options['fields']['field_late_fee_editable']['table'] = 'field_data_field_late_fee';
  $handler->display->display_options['fields']['field_late_fee_editable']['field'] = 'field_late_fee_editable';
  $handler->display->display_options['fields']['field_late_fee_editable']['relationship'] = 'reverse_field_property_node';
  $handler->display->display_options['fields']['field_late_fee_editable']['label'] = '';
  $handler->display->display_options['fields']['field_late_fee_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_late_fee_editable']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_late_fee_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_late_fee_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_late_fee_editable']['suppress_description'] = 0;
  /* Field: Content: late date (editable) */
  $handler->display->display_options['fields']['field_late_date_editable']['id'] = 'field_late_date_editable';
  $handler->display->display_options['fields']['field_late_date_editable']['table'] = 'field_data_field_late_date';
  $handler->display->display_options['fields']['field_late_date_editable']['field'] = 'field_late_date_editable';
  $handler->display->display_options['fields']['field_late_date_editable']['relationship'] = 'reverse_field_property_node';
  $handler->display->display_options['fields']['field_late_date_editable']['label'] = '';
  $handler->display->display_options['fields']['field_late_date_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_late_date_editable']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_late_date_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_late_date_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_late_date_editable']['suppress_description'] = 0;
  /* Field: Content: deposit (editable) */
  $handler->display->display_options['fields']['field_deposit_editable']['id'] = 'field_deposit_editable';
  $handler->display->display_options['fields']['field_deposit_editable']['table'] = 'field_data_field_deposit';
  $handler->display->display_options['fields']['field_deposit_editable']['field'] = 'field_deposit_editable';
  $handler->display->display_options['fields']['field_deposit_editable']['relationship'] = 'reverse_field_property_node';
  $handler->display->display_options['fields']['field_deposit_editable']['label'] = '';
  $handler->display->display_options['fields']['field_deposit_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deposit_editable']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_deposit_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_deposit_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_deposit_editable']['suppress_description'] = 0;
  /* Field: Content: pet fee (editable) */
  $handler->display->display_options['fields']['field_pet_fee_editable']['id'] = 'field_pet_fee_editable';
  $handler->display->display_options['fields']['field_pet_fee_editable']['table'] = 'field_data_field_pet_fee';
  $handler->display->display_options['fields']['field_pet_fee_editable']['field'] = 'field_pet_fee_editable';
  $handler->display->display_options['fields']['field_pet_fee_editable']['relationship'] = 'reverse_field_property_node';
  $handler->display->display_options['fields']['field_pet_fee_editable']['label'] = '';
  $handler->display->display_options['fields']['field_pet_fee_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pet_fee_editable']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_pet_fee_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_pet_fee_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_pet_fee_editable']['suppress_description'] = 0;
  /* Field: Content: manager (editable) */
  $handler->display->display_options['fields']['field_manager_editable']['id'] = 'field_manager_editable';
  $handler->display->display_options['fields']['field_manager_editable']['table'] = 'field_data_field_manager';
  $handler->display->display_options['fields']['field_manager_editable']['field'] = 'field_manager_editable';
  $handler->display->display_options['fields']['field_manager_editable']['label'] = '';
  $handler->display->display_options['fields']['field_manager_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manager_editable']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_manager_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_manager_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_manager_editable']['suppress_description'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = 'Sorry, that\'s not one of your properties';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'property' => 'property',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'prop';
  $export['property'] = $view;

  $view = new view();
  $view->name = 'rent_due';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'rent due';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Send rent due texts';
  $handler->display->display_options['css_class'] = 'rd';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
	4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'rd-views-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_property_target_id']['id'] = 'field_property_target_id';
  $handler->display->display_options['relationships']['field_property_target_id']['table'] = 'field_data_field_property';
  $handler->display->display_options['relationships']['field_property_target_id']['field'] = 'field_property_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_target_id']['id'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['table'] = 'field_data_field_customer';
  $handler->display->display_options['relationships']['field_customer_target_id']['field'] = 'field_customer_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_property_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Send rent due 1';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: first name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'field_property_target_id';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Property:';
  $handler->display->display_options['fields']['field_address_thoroughfare']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['alter']['path'] = '/prop/[nid_1]';
  $handler->display->display_options['fields']['field_address_thoroughfare']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  /* Field: Content: payment */
  $handler->display->display_options['fields']['field_payment']['id'] = 'field_payment';
  $handler->display->display_options['fields']['field_payment']['table'] = 'field_data_field_payment';
  $handler->display->display_options['fields']['field_payment']['field'] = 'field_payment';
  $handler->display->display_options['fields']['field_payment']['label'] = 'Rent';
  $handler->display->display_options['fields']['field_payment']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lease' => 'lease',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Content: address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['filters']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['filters']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['filters']['field_address_thoroughfare']['relationship'] = 'field_property_target_id';
  $handler->display->display_options['filters']['field_address_thoroughfare']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'rent-due';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'rent due';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'devel';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['rent_due_1'] = $view;
  
  
  
  
    $view = new view();
  $view->name = 'my_incoming_messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My incoming messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My incoming messages';
  $handler->display->display_options['css_class'] = 'mim';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customer_target_id']['id'] = 'field_customer_target_id';
  $handler->display->display_options['relationships']['field_customer_target_id']['table'] = 'field_data_field_customer';
  $handler->display->display_options['relationships']['field_customer_target_id']['field'] = 'field_customer_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_customer_node']['id'] = 'reverse_field_customer_node';
  $handler->display->display_options['relationships']['reverse_field_customer_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_customer_node']['field'] = 'reverse_field_customer_node';
  $handler->display->display_options['relationships']['reverse_field_customer_node']['relationship'] = 'field_customer_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_property_target_id']['id'] = 'field_property_target_id';
  $handler->display->display_options['relationships']['field_property_target_id']['table'] = 'field_data_field_property';
  $handler->display->display_options['relationships']['field_property_target_id']['field'] = 'field_property_target_id';
  $handler->display->display_options['relationships']['field_property_target_id']['relationship'] = 'reverse_field_customer_node';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date received';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: first name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['group_column'] = 'entity_id';
  /* Field: Content: address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'field_property_target_id';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = 'Property';
  /* Field: Content: last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_customer_target_id';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  /* Field: Content: mobile */
  $handler->display->display_options['fields']['field_mobile']['id'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['table'] = 'field_data_field_mobile';
  $handler->display->display_options['fields']['field_mobile']['field'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['label'] = 'Mobile';
  /* Field: Content: message category */
  $handler->display->display_options['fields']['field_message_category']['id'] = 'field_message_category';
  $handler->display->display_options['fields']['field_message_category']['table'] = 'field_data_field_message_category';
  $handler->display->display_options['fields']['field_message_category']['field'] = 'field_message_category';
  $handler->display->display_options['fields']['field_message_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_message_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: sms */
  $handler->display->display_options['fields']['field_sms']['id'] = 'field_sms';
  $handler->display->display_options['fields']['field_sms']['table'] = 'field_data_field_sms';
  $handler->display->display_options['fields']['field_sms']['field'] = 'field_sms';
  /* Field: Content: mms */
  $handler->display->display_options['fields']['field_mms']['id'] = 'field_mms';
  $handler->display->display_options['fields']['field_mms']['table'] = 'field_data_field_mms';
  $handler->display->display_options['fields']['field_mms']['field'] = 'field_mms';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'message' => 'message',
  );
  /* Filter criterion: Content: message type (field_message_type) */
  $handler->display->display_options['filters']['field_message_type_tid']['id'] = 'field_message_type_tid';
  $handler->display->display_options['filters']['field_message_type_tid']['table'] = 'field_data_field_message_type';
  $handler->display->display_options['filters']['field_message_type_tid']['field'] = 'field_message_type_tid';
  $handler->display->display_options['filters']['field_message_type_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_message_type_tid']['vocabulary'] = 'message_types';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-incoming-messages';
  $export['my_incoming_messages'] = $view;
  
  
  
  
  return $export;
}
