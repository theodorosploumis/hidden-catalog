<?php
/**
 * @file
 * hidden_catalog_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hidden_catalog_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Manager' => 'Manager',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access product node view'.
  $permissions['access product node view'] = array(
    'name' => 'access product node view',
    'roles' => array(),
    'module' => 'internal_nodes',
  );

  // Exported permission: 'access protected page password screen'.
  $permissions['access protected page password screen'] = array(
    'name' => 'access protected page password screen',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'protected_pages',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer protected pages configuration'.
  $permissions['administer protected pages configuration'] = array(
    'name' => 'administer protected pages configuration',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'protected_pages',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(),
    'module' => 'clone',
  );

  // Exported permission: 'create product content'.
  $permissions['create product content'] = array(
    'name' => 'create product content',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product content'.
  $permissions['delete any product content'] = array(
    'name' => 'delete any product content',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product content'.
  $permissions['delete own product content'] = array(
    'name' => 'delete own product content',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in brands'.
  $permissions['delete terms in brands'] = array(
    'name' => 'delete terms in brands',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in condition'.
  $permissions['delete terms in condition'] = array(
    'name' => 'delete terms in condition',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in gender'.
  $permissions['delete terms in gender'] = array(
    'name' => 'delete terms in gender',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in reference_no'.
  $permissions['delete terms in reference_no'] = array(
    'name' => 'delete terms in reference_no',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'download original image'.
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(),
    'module' => 'lightbox2',
  );

  // Exported permission: 'edit any product content'.
  $permissions['edit any product content'] = array(
    'name' => 'edit any product content',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product content'.
  $permissions['edit own product content'] = array(
    'name' => 'edit own product content',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in brands'.
  $permissions['edit terms in brands'] = array(
    'name' => 'edit terms in brands',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in condition'.
  $permissions['edit terms in condition'] = array(
    'name' => 'edit terms in condition',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in gender'.
  $permissions['edit terms in gender'] = array(
    'name' => 'edit terms in gender',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in reference_no'.
  $permissions['edit terms in reference_no'] = array(
    'name' => 'edit terms in reference_no',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Manager' => 'Manager',
    ),
    'module' => 'system',
  );

  return $permissions;
}
