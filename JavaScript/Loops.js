"use strict";

const num = [1, 2, 3, 4, 5];

// For Each
num.forEach((value) => {
  console.log(value);
});

const temp = num.map((value, index) => {
  return value;
});

// Map
temp.map((value) => {
  console.log(value);
});

// Filter
const afterFilter = num.filter((value) => {
  return value & 1;
});

console.log(afterFilter);

// Map + Filter : Nested
const res = num
  .map((value, index) => {
    return value * index;
  })
  .filter((value) => {
    return value % 2 == 0;
  });

console.log(res);

const data = ["ankit", "raj"];

data.map((value) => {
  console.log(`${value[0].toUpperCase()}${value.slice(1)}`);
});

// Slice by default, (begin, end)
num.splice(2, 1);
num.map((value) => console.log(value));

const obj = {
  name: "Ankit",
  uid: "20BCS9281",
  age: 23,
};

//  For In : Iterate on keys (eg. used for Objects)
for (const key in obj) console.log(obj[key]);

// For of : Iterate on Values
for (const value of data) console.log(value);
