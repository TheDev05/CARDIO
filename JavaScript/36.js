"use strict";

// Object Examples
let num = { "name": "Ankit", "age": "20" };
console.log(num);

console.log(num.name);

let val = {
    "name": "Akansha",
    "class": "10",
    "age": "17",
    "hobbies": ["Football", "Music"]
};

console.log(val);
console.log(val.name);
console.log(val.hobbies);
console.log(val.hobbies[1]);


//Creating new Object property from outside of Object braces 
val.gender = "female";
console.log(val.gender);

// Accesing properties thru brac notion instead dot notion
console.log(val["name"]);
console.log(val["gender"]);

val["country"] = "India";

