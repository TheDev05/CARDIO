"use strict";

// Clone using Object.assign();
// Object first letter is in uppercase
// use to clone objets, we can also use spread opeartors and assign method as well

const balls = {
    "color": "red",
    "radius": 20
};

const temp1 = balls;
const temp2 = {...balls};
const temp3 = Object.assign({}, balls);

console.log(temp1);
console.log(temp2);
console.log(temp3);
