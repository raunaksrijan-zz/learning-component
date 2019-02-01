<?php

/**
 * @file
 * GNE template file.
 *
 */
?>

<?php  if(isset($gne_reference['classes'])):  ?>
<div class="<?php print render($gne_reference['classes']); ?>">
  <?php  if(isset($gne_reference['label']) && isset($gne_reference['title_class'])):  ?>
    <span class="<?php print render($gne_reference['title_class']); ?>">
      <?php print render($gne_reference['label']); ?>
    </span>
  <?php endif; ?>

  <?php  if(isset($gne_reference['content']) && isset($gne_reference['content_class'])):  ?>
    <span class="<?php print render($gne_reference['content_class']); ?>">
       <?php print render($gne_reference['content']); ?>
    </span>
  <?php endif; ?>
</div>
<?php endif; ?>
