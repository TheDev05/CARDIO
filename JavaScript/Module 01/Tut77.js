"use strict";

// Function creating object & then returns it
function CreateObject(name, age, gender, email, address) {
    const temp = {};

    temp.name = name;
    temp.age = age;
    temp.gender = gender;
    temp.email = email;
    temp.address = address;

    temp.about = function () {
        console.log(`name: ${this.name} age: ${this.age} gender:${this.gender} email:${this.email} address:${this.address}`);
    }

    temp.is18 = function () {
        return (this.age >= 18);
    }

    return(temp);
}

const NewObj = CreateObject("Ankit", 20, "Male", "xyz123@gmail.com", "adarsh nagar mahadeva, siwan");

console.log(NewObj);

NewObj.about();
console.log(NewObj.is18());