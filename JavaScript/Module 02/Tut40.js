"use strict";

// Event delegation --> event have not applied on recently created div if event has previously applied on all divs fetched previously
const allDivs = document.querySelectorAll("div");

// Applied on two divs stricting .context div using some if-else
// for (const div of allDivs) {
//     if (div.classList.contains("context") === false) {
//         div.addEventListener("click", (e) => {
//             div.style.backgroundColor = "yellow";
//         })
//     }
// }

// The Above event haven't applied on the below new created div: 
const context = document.querySelector(".context");
const newDiv = document.createElement("div");
newDiv.classList = "box";

newDiv.style.backgroundColor = "blue";
context.append(newDiv);

// To rectify this phenomena "Event Delegation", we use a common global function

// e.target --> value from caller object

globalEvent("click", "div", (e) => {

    if (e.target.classList.contains("context")==false) {
    e.target.style.backgroundColor = "yellow";
        
    }
})

function globalEvent(type, selector, callback) {

    // Note: Event on whole document object
    document.addEventListener(type, (e) => {

        // If matches to our specified selector
        if (e.target.matches(selector)) callback(e);
    })
}


