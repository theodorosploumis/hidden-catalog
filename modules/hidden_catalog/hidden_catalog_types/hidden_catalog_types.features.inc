<?php
/**
 * @file
 * hidden_catalog_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function hidden_catalog_types_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
