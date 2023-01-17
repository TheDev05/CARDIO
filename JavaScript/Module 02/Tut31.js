"use strict";

const para = document.querySelector("p");

para.style.background = "linear-gradient(red,blue)";
para.style.color = "white";

// .className --> can set new class to an element also can get class names of an element

// set class names
const title = document.querySelector("h2");
title.className = "header-class";

// can set more than one class at a time take as a string
title.className = "header-class xyz abc";

// get class names --> returns all class name in a string as a text, not as array or object but as a text
console.log(title.className);


