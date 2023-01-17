"use strict";

// Restrict Event Propagation
// Event Bubbling

const child = document.querySelector(".child");
const parent = document.querySelector(".parent");
const gparent = document.querySelector(".gparent");

child.addEventListener("click", (e) => {
    child.style.backgroundColor = "blue";
    console.log("child");

}, true)

parent.addEventListener("click", (e) => {
    parent.style.backgroundColor = "blue";
    console.log("parent");
}, true)

gparent.addEventListener("click", (e) => {
    gparent.style.backgroundColor = "blue";
    console.log("gparent");

}, true)

// By default Event Capturing value i.e third parameter of capure is false, event capturing from top to bottom, bubbling bottom to top, if all parent-sibling-family has same events, event propagation occurs

// Occurence --> 1st Event Capturing Occurs (Top 2 Down), Then Bubbling occurs(Down 2 Top)

// No two event occurs on same Element, if Capturing already happend while coming top 2 bottom then for that element bublling not happen

// if capture value is false, comming thru top 2 bottom JS engine skip that event then hit bottom child(triggering elemnt) and then occur bubbling

// if capture value is set true for some of element/for all element after checking if got true, JS engine trigger that event then follow its path, goes for next

// Restrcting Event Propagation --> Use e.stopPropagation() in triggering alemt or in any elemnt when engine hits that line it terminates propagtion from that line

parent.addEventListener("click", (e) => {
    parent.style.backgroundColor = "blue";
    console.log("parent");

    e.stopPropagation();
}, true)

// Output:
// capture set true then, Gparent, parent now terminates propagation