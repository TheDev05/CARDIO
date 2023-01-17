"use strcit";

function a() {

    b();

    function b() {
        console.log(val);
    }
}

// a();
// var val = 10;

var val = 10;
a();