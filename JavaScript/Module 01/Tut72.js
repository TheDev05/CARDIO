// "use strict";

// when this is used without any object or in a function, iT by default adopt global object === window, for stricting this behaviour we can write "use srtict" at top of our file.

// console.log(window);
function myfun() {
    console.log(this);
}

myfun();