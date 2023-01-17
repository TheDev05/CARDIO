"use strict";

// Arrow functions have no any "This pointer", it adopts from surrounding/window===(global object) so it have undefind behaviuour with this, we avoid using "this" and arrow function together

const stuents = {
    "name": "ankit",
    "age": 20,
    "gender": "male",

    "about": () => {
        console.log(this.name, this, this.age, this, this.gender);
    }
};

// These both leads undefined behaviour
stuents.about();
stuents.about.call(stuents);