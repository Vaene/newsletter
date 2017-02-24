<?php

/**
 * Implements hook_theme().
 *
 * TODO: Generalize this so n-templates could be used without
 * so much duplication
 */
function newsletter_theme($existing, $type, $theme, $path) {
  $path = drupal_get_path('module', 'newsletter') . '/templates/';
  return array(
    'newsletter_header' => array(
      'variables' => array(
        'nl_node' => NULL,
        'utm_header_image' => NULL,
      ),
      'path' => $path,
      'template' => 'newsletter_header',
    ),
    'newsletter_footer' => array(
      'path' => $path,
      'template' => 'newsletter_footer',
    ),
    'newsletter_daily_a' => array(
      'variables' => array(
        'node' => NULL,
      ),
      'path' => $path,
      'template' => 'newsletter_daily_a',
    ),
    'newsletter_daily_card_a' => array(
      'variables' => array(
        'nl_node' => NULL,
        'node' => NULL,
        'index' => -1,
      ),
      'path' => $path,
      'template' => 'newsletter_daily_card_a',
    ),
    'newsletter_daily_ymal_a' => array(
      'variables' => array(
        'nl_node' => NULL,
        'node' => NULL,
        'index' => -1,
      ),
      'path' => $path,
      'template' => 'newsletter_daily_ymal_a',
    ),
    'newsletter_daily_b' => array(
      'variables' => array(
        'node' => NULL,
      ),
      'path' => $path,
      'template' => 'newsletter_daily_b',
    ),
    'newsletter_daily_card_b' => array(
      'variables' => array(
        'nl_node' => NULL,
        'node' => NULL,
        'index' => -1,
      ),
      'path' => $path,
      'template' => 'newsletter_daily_card_b',
    ),
    'newsletter_dedicated' => array(
      'variables' => array(
        'nl_node' => NULL,
        'node' => NULL,
        'index' => -1,
      ),
      'path' => $path,
      'template' => 'newsletter_dedicated',
    ),
  );
}
