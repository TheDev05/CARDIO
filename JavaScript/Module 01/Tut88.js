"use strict";

// Super Keyword in JS
// can assign diffrent properties to child class and simmuntinuesly can extract properties from parent class

// Super keyword somehow represents parent class


class Cars {
    constructor(Model, Colour) {
        this.Model = Model;
        this.Colour = Colour;
    }

    printDetail() {
        console.log(`${this.Model} with colour ${this.colour}`);
    }
}

class safari extends Cars {
    constructor(Model, Milege, Colour) {

        // Super keyword can tackel these two by its own constructor, rest can assigned in this class
        super(Model, Colour);
        this.Milege = Milege;
    }
}

const MyCar = new safari("IOLP12", "120kmph", "Red");
console.log(MyCar);