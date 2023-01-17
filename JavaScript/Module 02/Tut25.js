"use strict";

const btn = document.querySelector("button");
const context = document.querySelector(".context");

let counter = 0;
btn.addEventListener("click", (event) => {
    if (counter % 2 === 0) {
        context.style.backgroundColor = "yellow";
    } else context.style.backgroundColor = "white";

    counter++;

});