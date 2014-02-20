(function ($) {

  Drupal.behaviors.hubClip = {
    attach: function (context, settings) {

      // Attach Zurb Foundation javascripts
      $(document).foundation();

      /*
      $('.class', context).once('myCustomBehavior', function () {
        // Apply the myCustomBehaviour effect to the elements only once.
      });
      */
    }
  };

})(jQuery);
