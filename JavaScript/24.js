"use strict";

let sum = 0, i = 0;
while (1) {
    sum += i;
    i++;

    if (i > 10) {
        break;
    }
}

console.log(sum);