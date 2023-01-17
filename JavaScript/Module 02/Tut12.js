"use strict";

// get muntiple elements using getElementsByClass name
// get muntiple elements items using queryselectorAll

// getElementsByClassName():
// Returns array-like HTMLCollection-Object, means can accesible by indexing

const val = document.getElementsByClassName("home");
console.log(val[0]);

// Returns array-like NodeList:
const temp = document.querySelectorAll(".home");
console.log(temp[0]);



