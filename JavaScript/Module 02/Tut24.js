"use strict";

const btnList = document.querySelectorAll("button");
// console.log(btnList);

// Whatever we have set property in css file the sam ewill get changed

// background:red
// background-color:red (Not reflect);

for (const val of btnList) {
    val.addEventListener("click", (event) => {
        // console.log(event.target);
        
        event.target.style.background = "yellow";
        event.target.style.color = "grey";
    })
}
