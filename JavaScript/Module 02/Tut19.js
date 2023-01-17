"use strict";

// How to get dimesnsion of any elemets
const firstItem = document.querySelector("li");

// Total dimensions
const dimensions = firstItem.getBoundingClientRect();
console.log(dimensions);

// Specific dimensions
const width = firstItem.getBoundingClientRect().width;
console.log(width);

