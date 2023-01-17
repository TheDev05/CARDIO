"use strict";

// Computed values
const val1 = "key1";
const val2 = "key2";

const temp1 = "atom1";
const temp2 = "atom2";

const inox = {};

inox[val1] = temp1;
inox[val2] = temp2;

const inox2 = {
    [val1]: temp1,
    [val2]: temp2
};

console.log(inox);
console.log(inox2);

