"use strict";

// Object Inside Arrays
const num = [
    {
        "Name": "Ankit",
        "Age": 20,
        "Gender": "Male"
    },

    {
        "Name": "Akansha",
        "Age": 17,
        "Gender": "Female"
    }
];

console.log(num);
for(const val of num)
{
    console.log(val["Name"]);
}
