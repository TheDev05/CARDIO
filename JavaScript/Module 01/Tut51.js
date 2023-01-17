"use strict";

// Rest Parameters
const inox = (val1, val2, ...val3) => {
    console.log(val1);
    console.log(val2);
    console.log(val3);
}

inox(1, 2, 3, 4, 5, 6, 7);