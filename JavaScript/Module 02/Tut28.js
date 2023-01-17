"use strict";

// Event Bubbling/propogation
// Event Capturing
// Event delegation

const child = document.querySelector(".child");
const parent=document.querySelector(".parent");


// Event Bubbling: when we performance/trigger any event on inner div/elemnent or say child, their outside divs or parent, elemts in which that div/element reside, if they have also that same event then also get trigger.

parent.addEventListener("click",()=>{console.log("parent clicked");});

// This child event trigger its parent event
child.addEventListener("click", () => { console.log("Child Cliked"); })
