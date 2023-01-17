"use strict";

const phone = {
    "name": "samsung",
    "model": 1234,
    "year": 2014,
    "properties": ["good", "beautiful", 123, 1.3, true]
};

console.log(phone.model);
console.log(phone["year"]);

console.log(phone["properties"]);
console.log(phone["properties"][4]);

// Diffrence b/w dot Notation and brac Notation:
// whitespcaed name of object properties can only be accesed by brac notation, eg first name

// insert values in Object
phone["dob"] = "12 july 1998";

let price = 10234;
phone[price] = "This is the price of phone";

console.log(phone["10234"]);

// printing objects
for (let index in phone) {
    console.log(`${index} : ${phone[index]}`);
}

// Output all keys
console.log(Object.keys(phone));

for (const value of Object.keys(phone)) {
    console.log(phone[value]);
}
