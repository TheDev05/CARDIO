"use strict";

// Before execution of JS File, code compiles then code execute
// Reason of compilation: Early error checking & Determinining appropiate scope of variables

// Window--> Global Object
// Intially "this pointer" representing this global Object(window)

console.log(window);
console.log(this);
 
var temp;
console.log(temp);
 
// For exexcution of code: Js creates global execution context in which JS executes itself 

// JS is synchronous(step-step) & single threaded language