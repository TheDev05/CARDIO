"use strict";

//classList Toggle method --> accept class name, it toggles add or remove class on perfrom each event

const header = document.querySelector("h2");
const home = document.querySelector(".home");

home.addEventListener("click", () => {
    header.classList.toggle("header-class");
})

// .childen vs .childenNode --> Node methods include enter, whitespaces, blanks etc but non Node methods as .children only includes text & elements