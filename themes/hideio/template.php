<?php
/**
 * Add theme_hooks here.
 */

/**
 * Implements hook_preprocess_html().
 */
/* -- Delete this line if you want to use this function
function hideio_preprocess_html(&$vars) {

}
// */

/**
 * Implements hook_preprocess_page().
 */
/* -- Delete this line if you want to use this function
function hideio_preprocess_page(&$vars, $hook) {

}
// */

/**
 * Implements hook_preprocess_node().
 */
/* -- Delete this line if you want to use this function
function hideio_preprocess_node(&$vars) {

}
// */

/**
 * Implements hook_breadcrumb().
 */
/* -- Delete this line if you want to use this function
function hideio_breadcrumb($variables) {

}
//*/

function hideio_menu_alter(&$items) {
  unset($items['taxonomy/term/%taxonomy_term']);
  unset($items['taxonomy/term/%taxonomy_term/view']);
  unset($items['taxonomy/term/%taxonomy_term/feed']);
}