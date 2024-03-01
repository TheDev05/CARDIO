"use strict";

const num = [1, 2, 3, 4, 5];

num.forEach((value) => {
  console.log(value);
});

const temp = num.map((value, index) => {
  return value;
});

temp.map((value) => {
  console.log(value);
});

const data = ["ankit", "raj"];

data.map((value) => {
  console.log(`${value[0].toUpperCase()}${value.slice(1)}`);
});

num.splice(2, 1);
num.map((value) => console.log(value));

const obj = {
  name: "Ankit",
  uid: "20BCS9281",
  age: 23,
};

for (const key in obj) console.log(obj[key]);
