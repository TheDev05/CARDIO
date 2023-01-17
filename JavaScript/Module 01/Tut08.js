"use strict";

let lnumber = 10;
let lstring = "Ankit";
let lval = "10";
let lchar = 'x';

console.log(typeof (lnumber));

// javascript have no "char" data typeof.
console.log(typeof (lstring));
console.log(typeof (lchar));

// convert int to string
console.log(lnumber + "");
console.log(typeof (lnumber + ''));

// convert string to number
console.log(+lval);
console.log(typeof (+lval));

// other methods
let lval1 = 10;
let lval2 = "10";


// string first leeter have to in uppercase
console.log(String(lval1));
console.log(typeof (String(lval1)));

// number first leeter have to n uppercase
console.log(Number(lval2));
console.log(typeof (Number(lval2)));