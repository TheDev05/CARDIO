"use strict";

const head = document.querySelector("div");
// console.log(head);

// getAttribute(), accepts attribute name & returns value of attribute.
console.log(head.getAttribute("class"));

// getAttributeNode--> accepts same as of getAttribute but returns not only value of passed attribute name but value with its attribute name or say both

console.log(head.getAttributeNode("class"));

// .value appending in getAttributeNode --> given now only value
// console.log(head.getAttribute("class")).value;

// attributes --> returns all attributes in form of object

console.log(head.attributes);
console.log(typeof head.attributes);
console.log(typeof head.attributes[0]); 

