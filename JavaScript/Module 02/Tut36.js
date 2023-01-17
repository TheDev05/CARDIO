"use strict";

// Set interval & clear interval --> accepts function & time in ms.
// No need of caller object/element
// For clear interval we have to first take set interval in some varibale then use claer interval with this varibal ename to clear

const card = document.querySelector(".box");

let p = 0;
const interval = setInterval(() => {
    if (p & 1) {
        card.style.backgroundColor = "blue";
    } else
        card.style.backgroundColor = "red";

    if (p === 5) {
        clearInterval(interval);
    }

    p++;

}, 500);

let a = 10;
let b = 10;

setInterval(() => {
    if (a < 400) {
        card.style.marginLeft = a + "px";
        a += 10;
    } else if (b < 400) {
        card.style.marginTop = b + "px";
        b += 10;
    }
}, 100)