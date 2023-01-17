"use strict";

// Hositing

// 1. Variable declarations are scanned and are made undefined
// 2. Function declarations are scanned and are made available
// In case of arrow function it behaves just like a typical variable in memory creaton phase.

console.log(temp);
console.log(fool);
fool();

function fool() {
    console.log("Happy Bday");
}

var temp = 10;

// But the case with let & const, they also get allocated in memory context but in uninitialised manner, thus they can't be accessed without inislisation: that duration called, Temporal dead zone