"use strict";

const fruits = {
    "name": "apple",
    "colour": "red",
    print() {
        console.log(`Fruit: ${this.name}  colour: ${this.colour}`);
    }
};

fruits.print();
fruits.print.call(fruits);