"use strict";

// Classes in js
class Students {
    constructor(Name, Age, Gender) {
        this.Name = Name;
        this.Age = Age;
        this.Gender = Gender;
    }

    read() {
        console.log(`Name: ${this.Name} Age: ${this.Age} Gender: ${this.Gender}`);
    }
}

const Obj = new Students("Ankit", 20, "Male");

console.log(Obj);
Obj.read();
