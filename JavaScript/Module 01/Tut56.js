"use strict";

// ForEach
const num = [1, 2, 3, 4, 5];

// For Each accepts call back function, having parameters value and index 
num.forEach(function (val, index) { console.log(val, index); });
num.forEach(function (val) { console.log(val); });


const students = [
    {
        "name": "Ankit D",
        "age": 10
    },

    {
        "name": "Yash K",
        "age": 20
    },

    {
        "name": "Akansha P",
        "age": 17
    }
]


students.forEach(function (val) { console.log(val["name"]); });
for (const student of students) {
    console.log(student["age"]);
}

// Arrow Function
students.forEach((val) => { console.log(val); });
