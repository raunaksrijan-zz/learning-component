<?php

/**
 * @file
 * Product GNE template file.
 *
 */
?>
  <div class="<?php print render($Gne['classes']); ?>">
    <span class="gne-reference-pane__title">
      <?php print render($Gne['label']); ?>
    </span>
    <span class="gne-reference-pane__content">
       <?php print render($Gne['content']); ?>
    </span>
</div>
