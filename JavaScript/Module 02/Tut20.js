"use strict";

// Intro of Event:
const btn = document.querySelector(".btn");
// console.log(btn);

// Assging anonymous function or arrow function to trigger events

// btn.onclick = function () {
// console.log("You Clicked Me via anonymous function");}

// btn.onclick = () => { console.log("You clicked me via arrow function"); }

// Using addEventListener():
function isClick() { console.log("Cliked"); };

// Accepts 2 params, which event to be fired, and a function to be called: Either anonymous function, Declared Function or arrow function

// btn.addEventListener("click", isClick);
btn.addEventListener("click", function () { console.log("Clicked"); });
// btn.addEventListener("click", () => { console.log("Clicked"); });










