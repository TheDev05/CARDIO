"use strict";

// By default prototype is of type object, but we can change it to own, and can use as a coinatiner

// In js[[prototype]==__proto__]
// Object.getPrototypeOf(object)--> prints __proto__

function hello() {
    console.log("Hello");
}

console.log(hello.prototype);

hello.prototype = [];
console.log(hello.prototype);

hello.prototype.push(4);
hello.prototype.push(7);
hello.prototype.push(8);
hello.prototype.push(10);

console.log(hello.prototype);

