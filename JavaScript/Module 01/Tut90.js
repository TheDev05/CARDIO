"use trict";

// Getter & Setters
// get/set keyword use before function in class to get values/set vales direcly, after useing these keyword function become properties of that class

class students {
    constructor(Name, Age, Roll) {
        this.Name = Name;
        this.Age = Age;
        this.Roll = Roll;
    }

    set fullName(StudName) {
        this.Name = StudName;
    }

    get fullName() {
        console.log(this.Name);
    }
}

const stud1 = new students("Ankit", 20, "20BCS9281");
// console.log(stud1);

stud1.fullName = "Ankt Raj";
stud1.fullName;
