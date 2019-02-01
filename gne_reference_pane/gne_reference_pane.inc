<?php

/**
 * @file
 * Product GNE theming functions.
 */

/**
 * Implements hook_preprocess_HOOK().
 */
function fcl_product_components_preprocess_gne_reference_pane(&$vars) {
  $product = $vars['product'];

  //If the “One way airfare” is checked then only  “GNE reference value” is there else nothing will come up.
  if (isset($product->gne_reference) && isset($product->oneway_flag)) {
      $vars['gne_reference'] = [
        'content' => [
          '#markup' => t('@gne_reference', ['@gne_reference' => $product->gne_reference]),
        ],
        'classes' => 'gne-reference-pane',
        'content_class' => 'gne-reference-pane__content',
        'title_class' => 'gne-reference-pane__title',
        'label' => t('GNE:'),
      ];
  }

}
