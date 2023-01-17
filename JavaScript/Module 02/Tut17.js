"use strict";

const TodoList = document.querySelector("ul");
const newTask = document.createElement("li");

newTask.textContent = "Gym Freak";
// newTask.append("Gym Freak");

// Both append() & prepend() dont work on a sinle Node or simmuntinuesly
TodoList.append(newTask);
TodoList.prepend(newTask);

// We can clone before hand the node and use in prepend & append
// .cloneNode(true) --> true is for deep cloning, means it clone text and other info too

const newTask2=newTask.cloneNode(true);
TodoList.prepend(newTask2);