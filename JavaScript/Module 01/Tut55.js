"use strict";

// Function returning Function/ Hig order funcs
// Note: This is not reccursion, Function returning function not calling 

function fun1() {
    console.log("Hello World");
    return (fun1);
}

const inox = fun1();
inox();