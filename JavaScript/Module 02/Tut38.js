"use strict";

// setTimeout() && clearTimeout()
// setTimeout --> accepts function & time in ms, execute function after given ms time

const box = document.querySelector(".box");
const btn = document.querySelector("button");

btn.addEventListener("click", () => {
    clearTimeout(data);
})

const data = setTimeout(() => {
    box.style.backgroundColor = "blue";
}, 1000);
