"use strict";

// Array Destruction
let num = [1, 2, 3];

// By default extract values from array and sequentially put in variables defined
let [var1, var2] = num;
console.log(var1);
console.log(var2);

var1 = 10;
console.log(var1);

//In case there is hortage of data in array
let animals = ["Horse"];
let [first, second, third] = animals;

console.log(first);

// Prints Undefined
console.log(second);
console.log(third);

// In case we want to store data in non-sequentially or by index wise
// Put extra commas that signifies if skipping that index

let fruits = ["Apple", "Banana", "Orange"];
let [fav1, , fav2] = fruits;

console.log(fav1);
console.log(fav2);

//In case we want elemts in vars as well as in new array
let temp = [1, 2, 3, 4];
let [val1, val2, ...temp2] = temp;

console.log(val1);
console.log(val2);
console.log(temp2);
