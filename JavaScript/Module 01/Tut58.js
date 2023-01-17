"use strict";

// Filter Method: accepts callback function
// Returns boolena value and depending of this value if true, value get stored in new arry or skipped;

const num = [1, 2, 3, 4, 5, 6, 7];

const evens = num.filter((val) => { return (val % 2 === 0); });
console.log(evens);
 