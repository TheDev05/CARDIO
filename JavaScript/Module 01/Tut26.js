"use strict";

let fruits = ["Apple", "Mango", "Banana"];

console.log(fruits);
console.log(fruits[0]);

let numbers = [1, 2, 3];

console.log(numbers);
console.log(numbers[2]);

let mix = [1, 2.3, "hello", true, null];

console.log(mix);
console.log(mix[3]);

mix[3] = false;
console.log(mix[3]);
console.log(typeof (mix));

if (Array.isArray(mix)) {
    console.log("Mix is an array\n");
} else console.log("Mix is not an array\n");


