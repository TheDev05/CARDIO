"use strict";

// Spread Operator in Arrays
const num1 = [1, 2, 3];
const num2 = [5, 6, 7];

const new1 = [...num1, num2];
const new2 = [...num1, ...num2];

const text1 = [..."Ankit"];
const text2 = ["Ankit"];

console.log(new1);
console.log(new2);

console.log(text1);
console.log(text2);

// Spread Opearator in Objects
const object1 = {
    "key1": "val1",
    "key2": "val2"
};

const object2 = {
    "key3": "val3",
    "key4": "val4"
};

const newObj1 = { ...object1 };
const newObj2 = { ...object1, ...object2 };
const newObj3 = { ...object1, ...object2, "newkey": "newval" };


console.log(object1);
console.log(object2);

console.log(newObj1);
console.log(newObj2);
console.log(newObj3);







