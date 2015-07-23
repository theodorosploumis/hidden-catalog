<?php
/**
 * @file
 * hidden_catalog_tweaks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hidden_catalog_tweaks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function hidden_catalog_tweaks_fontyourface_features_default_font() {
  return array(
    'Dosis 200 (latin-ext)' => array(
      'name' => 'Dosis 200 (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Dosis&subset=latin-ext#200',
      'provider' => 'google_fonts_api',
      'css_selector' => '<none>',
      'css_family' => 'Dosis',
      'css_style' => 'normal',
      'css_weight' => 200,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:9:"Dosis:200";s:6:"subset";s:9:"latin-ext";}',
    ),
    'Dosis 700 (latin-ext)' => array(
      'name' => 'Dosis 700 (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Dosis&subset=latin-ext#700',
      'provider' => 'google_fonts_api',
      'css_selector' => '<none>',
      'css_family' => 'Dosis',
      'css_style' => 'normal',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:9:"Dosis:700";s:6:"subset";s:9:"latin-ext";}',
    ),
    'Dosis 800 (latin-ext)' => array(
      'name' => 'Dosis 800 (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Dosis&subset=latin-ext#800',
      'provider' => 'google_fonts_api',
      'css_selector' => '<none>',
      'css_family' => 'Dosis',
      'css_style' => 'normal',
      'css_weight' => 800,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:9:"Dosis:800";s:6:"subset";s:9:"latin-ext";}',
    ),
    'Dosis regular (latin-ext)' => array(
      'name' => 'Dosis regular (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Dosis&subset=latin-ext#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => '<none>',
      'css_family' => 'Dosis',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:13:"Dosis:regular";s:6:"subset";s:9:"latin-ext";}',
    ),
  );
}

/**
 * Implements hook_image_default_styles().
 */
function hidden_catalog_tweaks_image_default_styles() {
  $styles = array();

  // Exported image style: square.
  $styles['square'] = array(
    'label' => 'square',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
