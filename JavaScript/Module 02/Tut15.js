"use strict";

const val = Array.from(document.querySelectorAll("div"));
console.log(val);

// Printing all classes with div
val.forEach((temp)=>{console.log(temp.classList);});

// Adding a new class to all div Elements
val.forEach((temp)=>{temp.classList.add("newClass");});
console.log(val);

// Removing classes from elemenst
val.forEach((temp)=>{temp.classList.remove("newClass");});
console.log(val);

// Checking existence of class in Element
val.forEach((temp)=>{console.log(temp.classList.contains("newClass"));});

//Toggling--> It this class was found then remove it otherwise add it
val.forEach((temp)=>{temp.classList.toggle("newClass");});
console.log(val);






