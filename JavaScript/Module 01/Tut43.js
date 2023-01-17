"use strict";

const balls = [
    {
        "colour": "red",
        "radius": 10,


    },
    {
        "colour": "pink",
        "radius": 15,


    },
    {
        "colour": "green",
        "radius": 20,

    }
];

// Destructing of Array Nested object
const [obj1, obj2] = balls;
const [{ radius: r1 }, , { colour: c2 }] = balls;

console.log(obj1);
console.log(obj2);

console.log(r1);
console.log(c2);

