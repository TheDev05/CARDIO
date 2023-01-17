"use strict";

// New Keyword: Creates an empty object, named "this" inside called function and set __proto__ as the function.prototype and returns "this" object

function Students(name, age, gender) {

    // For better understanding new keyword create something like this, hidden:

    // const this=Object.create(Students.prototype); 

    this.name = name;
    this.age = age;
    this.gender = gender;

    // return (this); 
}

Students.prototype.about = function () {
    console.log("Name: ", this.name);
    console.log("Age: ", this.age);
    console.log("Gender: ", this.gender);
}

const NewObj = new Students("Ankit", 20, "Male");

// console.log(NewObj);
console.log(NewObj.about());
