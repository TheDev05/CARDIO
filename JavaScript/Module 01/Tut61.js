"use strict";

// Find Function
const animals = ["cat", "monkey", "deer", "asklpy"];
console.log(animals);

const ans = animals.find((val) => { return (val.length === 6); });
console.log(ans);

const products = [
    {
        "productID": 1,
        "product": "watch",
        "price": 1000
    },
    {
        "productID": 2,
        "product": "laptop",
        "price": 20000

    },
    {
        "productID": 3,
        "product": "tees",
        "price": 300

    }
];

let price = null;
const result = products.find((val) => { price = val.price; return (val.product === "laptop"); });

if (price) {
    console.log(price);
}

