"use strict";

const textBox = document.querySelector("textarea");
const display = document.querySelector(".display");

// console.log(textBox);
// console.log(display);

textBox.addEventListener("input", (event) => {
    display.innerHTML += event.data;
});

