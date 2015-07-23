<?php
/**
 * @file
 * hidden_catalog_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hidden_catalog_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Watches';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '32';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_reference_no' => 'field_reference_no',
    'field_brand' => 'field_brand',
    'field_gender' => 'field_gender',
    'field_condition' => 'field_condition',
    'body' => 'body',
    'field_price' => 'field_price',
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'lightbox2__lightbox__square__original';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'initial_image_style' => 'square',
    'baguettebox_image_style' => '',
    'animation' => 'fadeIn',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Reference */
  $handler->display->display_options['fields']['field_reference_no']['id'] = 'field_reference_no';
  $handler->display->display_options['fields']['field_reference_no']['table'] = 'field_data_field_reference_no';
  $handler->display->display_options['fields']['field_reference_no']['field'] = 'field_reference_no';
  $handler->display->display_options['fields']['field_reference_no']['label'] = 'Ref. No.';
  $handler->display->display_options['fields']['field_reference_no']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_reference_no']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_brand']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_gender']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gender']['delta_offset'] = '0';
  /* Field: Content: Condition */
  $handler->display->display_options['fields']['field_condition']['id'] = 'field_condition';
  $handler->display->display_options['fields']['field_condition']['table'] = 'field_data_field_condition';
  $handler->display->display_options['fields']['field_condition']['field'] = 'field_condition';
  $handler->display->display_options['fields']['field_condition']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_condition']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => '.',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Sort criterion: Content: Price (field_price) */
  $handler->display->display_options['sorts']['field_price_value']['id'] = 'field_price_value';
  $handler->display->display_options['sorts']['field_price_value']['table'] = 'field_data_field_price';
  $handler->display->display_options['sorts']['field_price_value']['field'] = 'field_price_value';
  $handler->display->display_options['sorts']['field_price_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_price_value']['expose']['label'] = 'Price';
  /* Sort criterion: refno */
  $handler->display->display_options['sorts']['field_reference_no_tid']['id'] = 'field_reference_no_tid';
  $handler->display->display_options['sorts']['field_reference_no_tid']['table'] = 'field_data_field_reference_no';
  $handler->display->display_options['sorts']['field_reference_no_tid']['field'] = 'field_reference_no_tid';
  $handler->display->display_options['sorts']['field_reference_no_tid']['ui_name'] = 'refno';
  $handler->display->display_options['sorts']['field_reference_no_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_reference_no_tid']['expose']['label'] = 'Ref. No';
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
    'product' => 'product',
  );
  /* Filter criterion: Brand (field_brand) (selective) */
  $handler->display->display_options['filters']['field_brand_tid_selective']['id'] = 'field_brand_tid_selective';
  $handler->display->display_options['filters']['field_brand_tid_selective']['table'] = 'field_data_field_brand';
  $handler->display->display_options['filters']['field_brand_tid_selective']['field'] = 'field_brand_tid_selective';
  $handler->display->display_options['filters']['field_brand_tid_selective']['ui_name'] = 'Brand (field_brand) (selective)';
  $handler->display->display_options['filters']['field_brand_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_brand_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_brand_tid_selective']['expose']['label'] = 'Brand';
  $handler->display->display_options['filters']['field_brand_tid_selective']['expose']['identifier'] = 'brand';
  $handler->display->display_options['filters']['field_brand_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_brand_tid_selective']['selective_display_field'] = 'field_brand';
  $handler->display->display_options['filters']['field_brand_tid_selective']['selective_display_sort'] = 'ASC';
  $handler->display->display_options['filters']['field_brand_tid_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Condition (field_condition) (selective) */
  $handler->display->display_options['filters']['field_condition_tid_selective']['id'] = 'field_condition_tid_selective';
  $handler->display->display_options['filters']['field_condition_tid_selective']['table'] = 'field_data_field_condition';
  $handler->display->display_options['filters']['field_condition_tid_selective']['field'] = 'field_condition_tid_selective';
  $handler->display->display_options['filters']['field_condition_tid_selective']['ui_name'] = 'Condition (field_condition) (selective)';
  $handler->display->display_options['filters']['field_condition_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_condition_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_condition_tid_selective']['expose']['label'] = 'Condition';
  $handler->display->display_options['filters']['field_condition_tid_selective']['expose']['identifier'] = 'condition';
  $handler->display->display_options['filters']['field_condition_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_condition_tid_selective']['selective_display_field'] = 'field_condition';
  $handler->display->display_options['filters']['field_condition_tid_selective']['selective_display_sort'] = 'ASC';
  $handler->display->display_options['filters']['field_condition_tid_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Gender (field_gender) (selective) */
  $handler->display->display_options['filters']['field_gender_tid_selective']['id'] = 'field_gender_tid_selective';
  $handler->display->display_options['filters']['field_gender_tid_selective']['table'] = 'field_data_field_gender';
  $handler->display->display_options['filters']['field_gender_tid_selective']['field'] = 'field_gender_tid_selective';
  $handler->display->display_options['filters']['field_gender_tid_selective']['ui_name'] = 'Gender (field_gender) (selective)';
  $handler->display->display_options['filters']['field_gender_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gender_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_gender_tid_selective']['expose']['label'] = 'Gender';
  $handler->display->display_options['filters']['field_gender_tid_selective']['expose']['identifier'] = 'gender';
  $handler->display->display_options['filters']['field_gender_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_gender_tid_selective']['selective_display_field'] = 'field_gender';
  $handler->display->display_options['filters']['field_gender_tid_selective']['selective_display_sort'] = 'ASC';
  $handler->display->display_options['filters']['field_gender_tid_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Content: Reference (field_reference_no) */
  $handler->display->display_options['filters']['field_reference_no_tid']['id'] = 'field_reference_no_tid';
  $handler->display->display_options['filters']['field_reference_no_tid']['table'] = 'field_data_field_reference_no';
  $handler->display->display_options['filters']['field_reference_no_tid']['field'] = 'field_reference_no_tid';
  $handler->display->display_options['filters']['field_reference_no_tid']['value'] = '';
  $handler->display->display_options['filters']['field_reference_no_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reference_no_tid']['expose']['operator_id'] = 'field_reference_no_tid_op';
  $handler->display->display_options['filters']['field_reference_no_tid']['expose']['label'] = 'Ref. No';
  $handler->display->display_options['filters']['field_reference_no_tid']['expose']['operator'] = 'field_reference_no_tid_op';
  $handler->display->display_options['filters']['field_reference_no_tid']['expose']['identifier'] = 'reference_no';
  $handler->display->display_options['filters']['field_reference_no_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_reference_no_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_reference_no_tid']['vocabulary'] = 'reference_no';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'products';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['products'] = $view;

  return $export;
}
