"use strict";

// InnerHTML: All those lines from starting tag to closing tag, of a particular tag name.

// innerText--> Only extract Text, not anything else

/* <div>
    InnerHTML of div
    InnerHTML of div
    InnerHTML of div
    InnerHTML of div
   </div> */

const val = document.querySelector("#heading");
console.log(val);

console.log(val.innerHTML);
val.innerHTML = "<h3>HTML Changed</h3>";
val.innerHTML += "<h3>Freindship</h3>";
val.innerHTML += "<button class=\"btn\"> Learn More </button> ";






