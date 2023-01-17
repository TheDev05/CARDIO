"use strict";

// Parameter Destructure
const balls = {
    "colour": "red",
    "radius": 20,
};

const inox = (balls) => {
    console.log(balls.colour);
    console.log(balls.radius);
}

const temp = ({ colour: val1, radius: val2 }) => {
    console.log(val1);
    console.log(val2);
}

inox(balls);
temp(balls);
