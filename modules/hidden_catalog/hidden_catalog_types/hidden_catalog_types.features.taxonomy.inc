<?php
/**
 * @file
 * hidden_catalog_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hidden_catalog_types_taxonomy_default_vocabularies() {
  return array(
    'brands' => array(
      'name' => 'Brands',
      'machine_name' => 'brands',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'condition' => array(
      'name' => 'Condition',
      'machine_name' => 'condition',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'gender' => array(
      'name' => 'Gender',
      'machine_name' => 'gender',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'reference_no' => array(
      'name' => 'Reference No',
      'machine_name' => 'reference_no',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
