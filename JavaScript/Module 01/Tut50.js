"using strict";

// let & cosnt have block level scopes
// var has function level scopes

{
    let val1 = 20;
    const val2 = 10;

    console.log(val1);
}

// Throw Error: Cnn't access them outside the declaration block
// console.log(val1);
// console.log(val2);

{
    var temp1 = 100;

    console.log(temp1);
}

console.log(temp1);

if (true) {
    var inox = 56;
}

console.log(inox);


