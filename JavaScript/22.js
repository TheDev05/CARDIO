"use strict";

let sum = 0;
for (let i = 0; i <= 10; i++)
    sum += i;

console.log(sum);

let total = 0;
for (var j = 0; j <= 10; j++)total += j;

console.log(j);

// scope of variable declared with var is outside of for loop, but this is not the case with let declared varibales
console.log(i);
console.log(total);