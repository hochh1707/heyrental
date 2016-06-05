<?php

	/**
	 * Implements hook_form().
	 * Admin form
	 */
	function hrc_form($form, &$form_state) {
		$s1 = new hrc_settings();
		$hrcSettings = $s1->hrc_settings();
		
		foreach($hrcSettings as $key => $setting){
			$form[$setting['name']] = array(
			'#default_value' => variable_get($setting['name']),
			'#title' => t($setting['title']),
			'#type' => $setting['field_type'],
			'#required' => TRUE,
			);
		}				
		
	return system_settings_form($form);
	}
