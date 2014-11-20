<div id="wrapper">
  <!-- socialbar Starts -->
  <?php if ($display): ?>
    <div id="socialbar">
      <ul class="social">
        <?php $options['attributes'] = array('target' => '_blank'); ?>
        <?php if ($facebook): ?><li class="fb"><?php print l(t('facebook'), $facebook, $options); ?></li> <?php endif; ?>
        <?php if ($twitter): ?><li class="tw"><?php print l(t('twitter'), $twitter, $options); ?></li> <?php endif; ?>
        <?php if ($linkedin): ?><li class="ln"><?php print l(t('linkedin'), $linkedin, $options); ?></li> <?php endif; ?>
      </ul>
    </div>
  <?php endif; ?>
  <!-- socialbar Ends -->
    
  <!-- Header Starts -->
  <div id="header" class="clearfix">
    <?php if ($logo || $site_slogan): ?>
      <div id="logo_slogan_wrapper">
        <!-- logo START -->
        <?php if ($logo): ?>
          <div id="logo">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
          </div>
        <?php endif; ?>
        <!-- logo Ends -->
        
        <!-- site slogan Starts -->
        <?php if ($site_slogan): ?>
          <div id="sitename">
            <p><?php print $site_slogan; ?></p><!--site slogan-->
          </div>
        <?php endif; ?>
        <!-- site slogan Ends -->
      </div>
    <?php endif; ?>

    <!-- navigation START -->
    <div id="navigation" class="clearfix">
      <div id="main-menu">
        <?php print drupal_render($main_menu_tree); ?>
      </div>
    </div>
    <!-- navigation Ends -->
  </div>
  <!-- Header Ends -->
  
  <div id="divider_wrapper"><div id="divider"></div></div>
 
  <!-- Header Starts -->
  <?php if ($page['header']): ?>
    <div id="header_wrapper">
      <?php print render($page['header']); ?>
    </div>
  <?php endif; ?>
  <!-- Header Ends -->
  
  <div id="extra">
    <?php if (theme_get_setting('breadcrumbs')): ?><div id="breadcrumbs teste"><?php if ($breadcrumb): print $breadcrumb; endif;?></div><?php endif; ?>
    <?php print $messages; ?>
  </div>
  <div class="clear"></div>
  
  <div id="main">
    <div id="post-content">
	  
    <?php
      //  imprimir menu da pagina inicial
      $menu = menu_navigation_links('menu-selecao');
      print theme('links',array('links' => $menu)); 
    ?> 	  
      <?php /* if ($page['content_top']): ?><div id="content_top"><?php print render($page['content_top']); ?></div><?php endif; ?>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?><h1 class="page-title"><?php print $title; ?></h1><?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if (!empty($tabs['#primary'])): ?><div class="tabs-wrapper clearfix"><?php print render($tabs); ?></div><?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
      <?php print render($page['content']);*/ ?>
    

    <!-- navigation START -->
    <div>
      <div>
        <?php //print drupal_render($main_menu_tree); ?>
      </div>
    </div>
    <!-- navigation Ends -->


    </div> <!-- /#main -->
    


    <?php /* if ($page['sidebar_first']): ?>
      <div id="sidebar" class="sidebar clearfix">
        <?php print render($page['sidebar_first']); ?>
      </div>  <!-- /#sidebar-first -->
    <?php endif; */ ?>
  </div>
  <div class="clear"></div>
  
  <!--Footer context Start -->
  <div id="footer-context">
    <!--Footer Start -->
    <div id="footer-bottom">
      <?php print render($page['footer']) ?>
      <?php if ($footer_copyright || $footer_developed): ?>
        <div id="copyright">
        <?php if ($footer_copyright): ?>
          <?php print t('Copyright'); ?> &copy; <?php print date("Y"); ?>, <?php print $site_name; ?>.
        <?php endif; ?>
        <?php if ($footer_developed): ?>
          <span class="developed"><?php print t('Designed & Develop by'); ?>
            <a href="<?php print ($footer_developedby_url); ?> " target="_blank">
              <?php print ($footer_developedby); ?>
            </a>
          </span>
        <?php endif; ?>
        </div>
      <?php endif; ?>
    </div>
    <!--Footer Ends -->
  </div>
  <!--Footer context Ends -->
  <div class="clear"></div>
</div>
