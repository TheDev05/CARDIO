"use strict";

// Prototype: all Functions in JS holds a empty space for objects, or all function have properties of objects
// In other words FunctionName.prototype === Object

// every function and objects has a built-in property, which is called its prototype. The prototype is itself an object.

//IMP: ([[prototype]] === __proto__) vs(prototype)

function Create(name1, name2, age1, age2) {

    const temp = Object.create(Create.prototype);

    temp.user1 = name1;
    temp.user2 = name2;
    temp.age1 = age1;
    temp.age2 = age2;

    return (temp);
}

Create.prototype.about = function () {
    console.log(this.user1, this.user2);
    console.log(this.age1, this.age2);
}

const user = Create("Ankit", "Yash", 20, 20);

console.log(user);
console.log(Create.prototype);
console.log(user.__proto__);
console.log(user.about());
