"use strict";

const homeBtn = document.querySelector(".home");
const header = document.querySelector("header");

let count = 0;
function abc() {

    if (count % 2 === 0) {
        header.style.backgroundColor = "white";
    } else header.style.backgroundColor = "black";
    count++;

}

// add some event
homeBtn.addEventListener("click", abc);

// Remove some event
const newsBtn = document.querySelector(".news");
newsBtn.addEventListener("click", () => {
    homeBtn.removeEventListener("click", abc)
});
