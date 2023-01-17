"use strict";

// Maps Data str in JS
const students = new Map();

students.set("Name", "Ankit");
students.set("Age", 20);
students.set("Gender", "Male");

// Map can handle any data type as key not as objects which take keys only as strings
students.set(1, 1);
students.set('c', 'c');
students.set(true, false);

console.log(students);

// Accessing value
console.log(students.get("Name"));
console.log(students.get(1));

// Get all keys
console.log(students.keys());
for (const key of students.keys()) {
    console.log(students.get(key));
}

// When directing extracting values from Map, it returns key-value pair in arrays indiviually
for (const key of students) {
    // we get object as output coz this returns array with 2 values
    console.log(typeof (key));
}

//Destructure of array, we have already learnt
for (const [key, value] of students) {
    console.log(key,value);
}


