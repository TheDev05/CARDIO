"use strict";

const btn = document.querySelector(".btn");

// When the second param is anonymous function the value of "this" inside the function is the value of calling object, Here "btn"

btn.addEventListener("click", function () {
    console.log("Clicked");
    console.log(this);
});

// When the second param is arrow function the value of "this" inside the function is the value of global object, window
btn.addEventListener("click", () => { console.log("Clicked"); console.log(this); });