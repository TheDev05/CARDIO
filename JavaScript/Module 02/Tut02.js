"use strict";

// Closure --> Function bundled with its lexical scopes[includeing whatever in its lexical scopes or outside scope]

// More precisely, Closure holds its references of its lexical scopes variables' not only values

function first() {

    let val1 = 5;
    function second() {

        let val2 = 50;
        function third() {

            console.log(val2);
            console.log(val1);
        }

        val2 = 100;
        return (third);
    }

    return (second());
}

// When third() get returnes to temp, it returned as closure/bundle of third() function itself and lexical scopes refeences, that is val1 & val2 references

const temp = first();
temp();


