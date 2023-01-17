"use strict";

{
    var x = 10;
    let y = 10;
    const z = 10;
}

console.log(x);

// Let and Const are block scope variables and can be accesible only inside block
// whereas var i sglobal scoped variable

// Inaccesible
console.log(y);
console.log(z);