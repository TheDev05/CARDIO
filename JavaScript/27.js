"use strict";

let num = [1, 2, 3];

console.log(num);
num.push(10);

console.log(num);

//pop() removes last element from array and gives the value of that element as well.
let val = num.pop();

console.log(val);
console.log(num);


//unshift(x) insert values at index 0
num.unshift(12);
num.unshift(13);

console.log(num);

let atom = num.shift();
console.log(atom);
console.log(num);