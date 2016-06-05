<?php
/**
 * @file
 * heyrental_setup.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function heyrental_setup_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-properties_send-rent-due-1:rent-due/1.
  $menu_links['menu-properties_send-rent-due-1:rent-due/1'] = array(
    'menu_name' => 'menu-properties',
    'link_path' => 'rent-due/1',
    'router_path' => 'rent-due',
    'link_title' => 'Send rent due 1',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-properties_send-rent-due-1:rent-due/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-properties_send-rent-due-2:rent-due/2.
  $menu_links['menu-properties_send-rent-due-2:rent-due/2'] = array(
    'menu_name' => 'menu-properties',
    'link_path' => 'rent-due/2',
    'router_path' => 'rent-due',
    'link_title' => 'Send rent due 2',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-properties_send-rent-due-2:rent-due/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-properties_send-rent-due-3:rent-due/3.
  $menu_links['menu-properties_send-rent-due-3:rent-due/3'] = array(
    'menu_name' => 'menu-properties',
    'link_path' => 'rent-due/3',
    'router_path' => 'rent-due',
    'link_title' => 'Send rent due 3',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-properties_send-rent-due-3:rent-due/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Send rent due 1');
  t('Send rent due 2');
  t('Send rent due 3');

  return $menu_links;
}
