"use strict";

//  Object.create(proto) & __proto__;
// this unction creates an empty object and assign the passed object as its proto, means if the accessing properies or value have not found in the parent object, this object is allowed to then search in their proto object

const obj1 = {
    "name": "ankit",
    "age": 20
};

const obj2 = {
    "name": "yash"
};

// Throws undefined
console.log(obj2.age);

// Now we have set Obj1 as proto for Obj3 using Object.create()
const obj3 = Object.create(obj1);

obj3.name = "Aditya";

console.log(obj3.age);
console.log(obj3.__proto__); //Prints proto of respective object

"use strict";