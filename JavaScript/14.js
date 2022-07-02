"use strict";

let age = 18;

if (age > 18) {
    console.log("User Is not Juvenile\n");
} else console.log("He is Juvenile\n");

let lval = 10;
if (lval % 2 == 0) {
    console.log(`${lval} is even\n`);

}
else console.log(`${lval} is odd\n`);


//falsy values:
// eg, 0,false,null,empty string,'' 

let ltemp1 = "";
if ( ltemp1) {
    console.log("True\n");
} else console.log("False\n");