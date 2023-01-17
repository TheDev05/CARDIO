"use strict";

// Has Own Property
// If we print all keys of object holding values of its proto, It prints all values of its own and its proto as well

// to restrict it to only of its own value not proto we use hasOwnProperty()

function fill(Name, Age, Gender) {
    this.Name = Name;
    this.Age = Age;
    this.Gender = Gender;
}

fill.prototype.address = "Adarsh Nagar, Mahadeva, Siwan"
const NewObj = new fill("Ankit", 20, "Male");

// console.log(NewObj.address);

for (const keys in NewObj) {
    // It prints Address property too, which is not its property but of its proto object's property
    console.log(keys);

    // To restrict this use
    if (NewObj.hasOwnProperty(keys)) {
        console.log(keys);
    }
}

