"use strict";

// get & set properties

const anchors = document.querySelector("a");
console.log(anchors);

const link = anchors.getAttribute("href");
console.log(link);

// getAttributes()

console.log(typeof link);

const val = document.querySelector("#heading").getAttribute("id");
console.log(val);

// setAttributes: accepts 2 params: which attribute to be set, what attrivute to be set
anchors.setAttribute("href", "https://facebook.com");

