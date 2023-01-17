let section = document.querySelector('section');
window.addEventListener("scroll", function () {
  let value = window.scrollY;
  section.style.clipPath = "circle(" + value + " at center center)";
});

console.log("first");
