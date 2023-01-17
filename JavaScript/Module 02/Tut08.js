"use strict";

// Query Selecter: Work fetch value for any Element, div, class as well as id

// Accept params as we declare in css File, dot for classes, hash or ids etc

const text = document.querySelector("#text");
console.log(text);

// querySelector() only fetch the first value encountered, not all values
const anchors1 = document.querySelector("a");
console.log(anchors1);

// For all the values for passed parameter, use querySelectorAll()
const anchors2 = document.querySelectorAll("a");
console.log(anchors2);