"use strict";

// "Every Method: returns boolean: If each & every element matches with condition"
const num = [6, 2, 8, 4, 10];

const result = num.every((val) => { return (val % 2 === 0); });
console.log(result);

const text = ["dimple", "yash", "rathore", "raj"];
const ans = text.every((val) => { return (val[0] !== 'a'); });

console.log(ans);