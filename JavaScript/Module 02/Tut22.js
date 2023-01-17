"use strict";

const temp = document.querySelectorAll("button");
// console.log(temp);

for (const val of temp) {
    val.addEventListener("click", function () {
        console.log("Hello World");

        // "this" keyword doesnot work fine with arrow function
        // console.log(this.textContent);
    })
}
