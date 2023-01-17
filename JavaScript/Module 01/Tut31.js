"using strict";

const fruits = ["Apple", "Mangoes"];
console.log(fruits);

//Inspite its const property & pushing new item it can accept it easily because, array remain have same address, new intilisation changes address not pushing elements.

fruits.push("Guava");
console.log(fruits);