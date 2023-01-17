"use strict";

const btn = document.querySelector("button");
const bg = document.querySelector(".context");

btn.addEventListener("click", (event) => {

    let val1 = Math.floor(Math.random() * 256);
    let val2 = Math.floor(Math.random() * 256);
    let val3 = Math.floor(Math.random() * 256);

    // console.log(typeof val1);

    bg.style.background = `rgb(${val1}%,${val2}%,${val3}%)`;
    btn.textContent = `rgb(${val1}%,${val2}%,${val3}%)`;

})