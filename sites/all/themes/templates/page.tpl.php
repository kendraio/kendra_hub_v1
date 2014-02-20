<div class="sticky contain-to-grid">
  <nav class="top-bar" data-topbar>
    <ul class="title-area">
      <li class="name">
        <h1>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">Kendra Hub</a>
        </h1>
      </li>
      <li class="toggle-topbar menu-icon"><a href="#">Menu</a></li>
    </ul>

    <section class="top-bar-section">

      <?php print $topbar_left; ?>
      <?php print $topbar_right; ?>

    </section>

  </nav>
</div>

<?php if (!empty($messages)): ?>
  <div id="messages">
    <?php print $messages; ?>
  </div>
<?php endif; ?>

<div id="page">
  <div class="l-full">
    <div class="l-full-inner">
      <?php if ($title && $title != 'Home'): ?><h1><?php print $title; ?></h1><?php endif; ?>
      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </div>
  </div>
</div>
