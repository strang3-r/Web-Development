$("h1").text("Good Bye");

// $("h1").addClass("big-title margin-50");

$("button").text("Don't Click Me");

$("button").css("color", "green");

$("button").html("<em>Hey</em>");

// $("a").attr("href", "https://www,yahoo.com");

// $("h1").click(function() {
//   $("h1").css("color", "green");
// });


// for(var i = 0; i<5; i++){
//   document.querySelectorAll("button")[i].addEventListener("click", function() {
//     document.querySelector("h1").style.color = "green";
//   });
// }

$("button").click(function(){
  $("h1").css("color", "green");
});


$(document).keypress(function(event){
  $("h1").text(event.key);
});


$("h1").on("click", function(){
  $("h1").css("color", "brown");
});


$("h1").append("<button>New</button>");
$("h1").prepend("<button>New</button>");
$("h1").before("<button>New</button>");
$("h1").after("<button>New</button>");


// $("button").remove();

// $("button").on("click", function(){
//   $("h1").hide();
// });

//
// $("button").on("click", function(){
//   $("h1").toggle();
// });


// $("button").on("click", function(){
//   $("h1").fadeOut();
// });
//
//
// $("button").on("click", function(){
//   $("h1").fadeIn();
// });


// $("button").on("click", function(){
//   $("h1").fadeToggle();
// });


// $("button").on("click", function(){
//   $("h1").slideUp();
// });
//
//
// $("button").on("click", function(){
//   $("h1").slideDown();
// });


// $("button").on("click", function(){
//   $("h1").slideToggle();
// });


$("button").on("click", function(){
  $("h1").slideUp().slideDown().animate({opacity: 0.5});  //only numeric values are accepted as css
});
