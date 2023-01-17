"use strict";

// Using Loops : queryselectorAll() returns NodeList (Array-Like container) with all the objects with same class, div etc passed in queryselectedAll function, Now we can simply iterate thru function and manipulte them all.

// getElementsByTagName(): 
const TagNames = document.getElementsByTagName("a");
for (let index = 0; index < TagNames.length; index++) {

    if (index > 4) {
        TagNames[index].style.color = "green";
    }
    TagNames[index].style.fontWeight = "bold";
}

// getElementsByClassName():
const ClassNames = document.getElementsByClassName("foot");
console.log(ClassNames);
console.log(ClassNames[2]);

// with HTML collection, we can only use "for of" loop or simple "for loop"
// with NodeList we can use both above + "for each" loop too.

for (const val of ClassNames) {
    // console.log(val);
    val.style.backgroundColor = "white";

}



