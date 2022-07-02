"use strict";

let lval;
console.log(typeof (lval));

lval = "Ankit";
console.log(typeof (lval), lval);

let lval1 = null;

console.log(lval1);

// This is a accepted bug is javascript, type of null have to be null, not object.
console.log(typeof (lval1));

// BigInt
let ltemp = 12345678912345678912345678912345678912345;
let xtemp = 123456n;

// putting 'n' at end of a number convert it into bigINT
console.log(typeof (xtemp));
console.log(typeof (ltemp));

console.log(ltemp);
console.log(BigInt(ltemp));

let ltemp1 = BigInt(ltemp);
console.log(ltemp1);

console.log(typeof (ltemp1));





