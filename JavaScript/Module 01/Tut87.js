"use strict";

class Animals {
    constructor(Name, Age) {
        this.Name = Name;
        this.Age = Age;
    }

    eat() {
        console.log(`${this.Name} alredy consumed his/her meal`);
    }
};

class Cow extends Animals {
};

const Obj = new Cow("Cow", "8");

console.log(Obj);
Obj.eat();