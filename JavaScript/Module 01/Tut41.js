"use strict";

//Destructuring of Objects
const Person = {
    "Name": "Ankit",
    "Gender": "Male",
    "Age": 20
};

const student = Person.Name;
const student_Gender = Person.Gender;

// console.log(student);
// console.log(student_Gender);

const { Name: text1, Gender: text2 } = Person;
const { Name, Gender, ...reseProps } = Person;

console.log(Name);
console.log(Gender);
console.log(reseProps);

console.log(text1);
console.log(text2);

