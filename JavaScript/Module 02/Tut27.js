"use strict";

// KeyPress event & MouseHover events
const total = document.querySelector("body");
total.addEventListener("keypress", (event) => { console.log(event.key); });

const btn = document.querySelector("button");
btn.addEventListener("mouseover",()=>{console.log("Mouse Over Initiated");});

btn.addEventListener("mouseleave",()=>{console.log("Mouse leave initialted");});
