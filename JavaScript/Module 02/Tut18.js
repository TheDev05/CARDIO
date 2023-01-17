"use strict";

const todolist = document.querySelector("ul");
const newitem = document.createElement("li");

// append() & appendChild() both are same
newitem.textContent = "Badminton Players";
todolist.appendChild(newitem);

// insertBefore()
const todolist1 = document.querySelector("ul");
const newitem1 = document.createElement("li");

newitem1.textContent = "My Good Freind";
const temp = document.querySelector(".li-2");

todolist1.insertBefore(newitem1, temp);

// ReplaceChild()
const todolist2 = document.querySelector("ul");
const newitem2 = document.createElement("li");

newitem2.textContent = "My Lovely Family";
const temp1 = document.querySelector(".li-2");

// RemoveChild()
// todolist2.removeChild(temp1);

todolist2.replaceChild(newitem2, temp1);
temp1.replaceChild(newitem2,temp1);




