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
  if (isset($product->gne_reference)) {
      $vars['Gne'] = [
        'content' => [
          '#markup' => t('@Gne', ['@Gne' => $product->gne_reference]),
        ],
        'classes' => 'gne-reference-pane',
        'label' => 'GNE:',
      ];
  }

}
