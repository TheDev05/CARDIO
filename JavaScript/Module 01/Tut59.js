"use strict";

// Accepts callback function, returns sum(say) of whole Array.
// first parameter of reduce function: summ second array values
// Intiliaze sum with 0

const num = [1, 2, 3, 4];

const total = num.reduce((sum, val) => { return (sum + val); }, 0);
console.log(total);

const cart = [
    {
        "productID": 1,
        "product": "Phone",
        "price": 12000
    },

    {
        "productID": 2,
        "product": "watch",
        "price": 3000,
    }
];

const totalPrice = cart.reduce((sum, val) => { return (sum + val["price"]); }, 0);
console.log(totalPrice);