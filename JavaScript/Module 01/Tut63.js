"use strict";

// Some Method: returns boolean: If atleast one element matches with condition
const num = [1, 2, 3, 4, 5];
const ans = num.some((val) => { return (val % 2 === 0); });

console.log(ans);
