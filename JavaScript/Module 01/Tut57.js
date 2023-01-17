"use strict";

// Map in arrays
// accept callback function and returns array either of undefined or values

const num = [1, 2, 3, 4, 5, 6];

const temp = num.map((val) => { return (val); });
console.log(temp);

const temp2 = num.map((val, index) => { return (index); });

console.log(temp2);

const temp3 = num.map(() => { console.log("Now This retuens undefined"); });
console.log(temp3);