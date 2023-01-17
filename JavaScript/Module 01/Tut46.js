"use strict";

// Arrow Function
const sing4me = () => { console.log("Happy Bday to You!"); };

sing4me();

const AddThem = (val1, val2) => { return (val1 + val2); };
console.log(AddThem(2, 3));

// We can remove parenthesis if there is single Parameter is used!
const square = val => { return (val ** 2); };
console.log(square(2));

// We can remove braces of function as well if there is one-liner return statement
const root = val => val ** 0.5;
console.log(root(16));


