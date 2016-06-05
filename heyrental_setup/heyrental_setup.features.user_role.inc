<?php
/**
 * @file
 * heyrental_setup.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function heyrental_setup_user_default_roles() {
  $roles = array();

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 3,
  );

  return $roles;
}
