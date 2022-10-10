"use strict";

let num1 = [1, 2, 3];
let num2 = num1;

console.log(num1);
console.log(num2);

num1.unshift(4);

// num2 uses Reference/address of num1 while intiliasing so the same change refelect in both as they share same address.
console.log(num1);
console.log(num2);
