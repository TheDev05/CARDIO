"use strict";

// sort() by default sort by assuming values as String(ASCII)

const num = [4, 100, 2, 3];
num.sort();

console.log(num);

// sort() gives first prioprity to uppercase letters cause of their first apperreance in ascii table
const text = ["ANKIT", "AKANSHA", "ankit", "akansha", "yash", "Ankit"];
text.sort();

console.log(text);

// Sort in ascending order
num.sort((val1, val2) => { return (val1 - val2); });
console.log(num);

// Sort in descending order
num.sort((val1, val2) => { return (val2 - val1); });
console.log(num);


// Sorting an object array
const products = [
    {
        "productID": 1,
        "product": "watch",
        "price": 1000
    },

    {
        "productID": 2,
        "product": "phone",
        "price": 4000
    },

    {
        "productID": 3,
        "product": "laptop",
        "price": 34000
    }
];

const temp = [...products];
temp.sort((a, b) => { return (a.price - b.price) });

console.log(temp);

