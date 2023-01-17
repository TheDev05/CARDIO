"use strict";

// Creating new Element
// using innerHTML can also lead to perform this task, but it have some rendering issues, .innerHTML() render al previous elements on each & every call, instead

// we use .createElement();

const newItem = document.createElement("li");
console.log(newItem);

// const textNode = document.createTextNode("Hello World");
// newItem.append(newItem);

newItem.append("Hello World");

// Append()
const val = document.querySelector("ul");
val.append(newItem);

console.log(val);

// Prepend()
const newItem2 = document.createElement("li");
newItem2.append("Push Ups");

const TodoList = document.querySelector("ul");
TodoList.prepend(newItem2);

// Removing values
const removeFirstTask=document.querySelector("li");

// Direclty get removed
removeFirstTask.remove(); 

// Before() & After() methods
const TodoList1=document.querySelector("ul");

// TodoList.before("This is example of before()");
// TodoList.after("This is example of after()");


