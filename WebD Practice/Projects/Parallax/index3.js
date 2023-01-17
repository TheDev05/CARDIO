let section = document.querySelector(".Second_Page");
let NavBar = document.querySelector(".NavBar");
let res = 0;

console.log("first")

window.addEventListener("scroll", function () {
  let value = window.scrollY;
  section.style.clipPath = `inset(0% 0% 0% ${value}px)`;

  res = value;

  //change colur of all nav link to white when div coloiur change to black 2 white.

  document.querySelectorAll(".nav-a").forEach((delta) => {
    if (res > 0 && res < window.innerWidth * 1.5) {
      delta.style.color = "black";

      if (res >= window.innerWidth + window.innerHeight / 2) {
        NavBar.style.display = "none";
      } else NavBar.style.display = "flex";
    } else {
      delta.style.color = "white";
    }
  });
});