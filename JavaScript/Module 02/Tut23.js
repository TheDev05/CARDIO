"use strict";

// Event Object
const btn1 = document.querySelector("#btn-1");
// console.dir(btn1);

// btn1.addEventListener("click", () => { console.log("Clicked"); });

// fetching event object
// function assigns perfomed event in passed parameter --> in the form of object

// btn1.addEventListener("click", function (event) {
//     console.log(event.target);
// })

const btnCollection = document.querySelectorAll("button");
for (const button of btnCollection) {
    button.addEventListener("click", (event) => {
        // console.log("Clicked");
        console.log(event.target.textContent);
    });
}

