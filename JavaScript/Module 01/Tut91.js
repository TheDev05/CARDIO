"use strict";

// Instatnce methods & properties needs objets to get called
// Static methods & properties: No need of objects to call them

class animals {
    constructor(Name, Age) {
        this.Name = Name;
        this.Age = Age;
    }

    static colour = "red";
    static printColour() {
        console.log(this.colour);
    }

    detail() {
        console.log(`Animal: ${this.Name} Age: ${this.Age}`);
    }
}


const NewObj = new animals("Monkey", 20);

console.log(NewObj);

// Static properties/ methods have no need of objects
console.log(animals.colour);
animals.printColour();