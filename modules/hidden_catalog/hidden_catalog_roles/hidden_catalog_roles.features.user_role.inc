<?php
/**
 * @file
 * hidden_catalog_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hidden_catalog_roles_user_default_roles() {
  $roles = array();

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 3,
  );

  return $roles;
}
