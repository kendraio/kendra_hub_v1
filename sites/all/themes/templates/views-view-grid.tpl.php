
<?php foreach ($rows as $row_number => $columns): ?>
  <div class="l-grid-<?php print $options['columns']; ?>">
    <?php foreach ($columns as $column_number => $item): ?>
      <div class="l-grid-item">
        <?php print $item; ?>
      </div>
    <?php endforeach; ?>
  </div>
<?php endforeach; ?>
