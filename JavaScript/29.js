"use strict";

//cloning of array
let num1 = [1, 2, 3];

// let num2 = [1, 2, 3];
let num2 = [].concat(num1);
let num3 = num1.slice(0);

console.log(num1);
console.log(num2);
console.log(num3);

// other: spread operator
let num4 = [...num1];
console.log(num4);

// Cloning with extra value at end
let num5 = [...num1, 5, 6];
console.log(num5);

// Double array cloning
let num6 = [...num1, ...num5];
console.log(num6);

