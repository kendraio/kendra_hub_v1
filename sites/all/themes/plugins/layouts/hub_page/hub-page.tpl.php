<div class="sticky contain-to-grid">
  <nav class="top-bar" data-topbar>
    <ul class="title-area">
      <li class="name"><h1><?php print l('Kendra Hub', ''); ?></h1></li>
      <li class="toggle-topbar menu-icon"><a href="#">Menu</a></li>
    </ul>

    <section class="top-bar-section">
      <?php print $content['topbar']; ?>
    </section>

  </nav>
</div>


<div id="page">
  <div class="l-full">
    <div class="l-full-inner">
      <?php print $content['main']; ?>
    </div>
  </div>
</div>
