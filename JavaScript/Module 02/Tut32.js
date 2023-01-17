"use strict";

// ClassList
// returns array list of all class names of an Element
// can set new class to an Element by using .add() in classList

const title = document.querySelector("h2");

// can add muntiple classes at a time
title.classList.add("header-class", "xyz", "abc");

// Returns an array of classes
console.log(title.classList);

//Removing class from an element
title.classList.remove("header-class"); 