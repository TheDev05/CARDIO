"use strict";

// Call, Apply and Bind
// Call & Apply --> Bind the function with passed object so that that "this" keyword now hold all value of that passed object

// Bind--> same task as of above both but instead of exceution of called function it simply returns a new function with all the exection of called function

function about(father, mother) {
    console.log(this.name);
    console.log(this.gender);
    console.log(this.age);

    console.log(father);
    console.log(mother);
}

const stud1 = {
    "name": "ankit",
    "gender": "male",
    "age": 20
};

const stud2 = {
    "name": "yash",
    "gender": "male",
    "age": 20
};

// Call method
about.call(stud1, "xyz", "abc");
about.call(stud2, "pqr", "mnp");

// Apply method
about.apply(stud1, ["xyz", "abc"]);
about.apply(stud2, ["pqr", "mnp"]);

// Bind method
const fool = about.bind(stud1, "abc", "xyz");
fool();