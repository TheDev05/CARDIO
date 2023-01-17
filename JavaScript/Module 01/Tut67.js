"use strict";

// sets:
// Fisrt letter of set have to be capital: 'S'

// 1. Iterable
// 2. No Index-based Access
// 3. Order is not guranted and
// 4. Can hold mix data types but only unique


// IMP: Two arrays with same elemnts are not same as per pov of javascript because they hold diffrent address.

const num = new Set([1, 2, 3, 3]);
console.log(num);

const temp = new Set();

temp.add(1);
temp.add(1);

// They are diffrent as per JS pov
temp.add([1, 2, 3]);
temp.add([1, 2, 3]);

console.log(temp);


// .has() returns boolean & check the presence of value in set
console.log(temp.has(2));
console.log(temp.has(1));

for (const val of num) {
    console.log(val);
}