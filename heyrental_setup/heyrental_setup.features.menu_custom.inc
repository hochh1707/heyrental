<?php
/**
 * @file
 * heyrental_setup.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function heyrental_setup_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-properties.
  $menus['menu-properties'] = array(
    'menu_name' => 'menu-properties',
    'title' => 'Collect rent',
    'description' => '',
  );
  // Exported menu: menu-view-my.
  $menus['menu-view-my'] = array(
    'menu_name' => 'menu-view-my',
    'title' => 'View my...',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Collect rent');
  t('View my');

  return $menus;
}
