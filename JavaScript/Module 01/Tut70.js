"use strict";

// Optinal chananing

// In some scenarios, data dynamically updated, It is possible at some moment, the value is not there but currently exists there, in these cases it becaomes worst if we get error coz of debuging issues, biut will helpful if It throws "undefined".

const user = {
    "userId1": 1,
    "userId2": 2,
    "userId3": 3,
    // "user_names": {
    //     "first_user": "Ankit",
    //     "second_user": "Yash"
    // }
};

console.log(user.userId1);

// Throws error
console.log(user.user_names.first_user);

// Now it outputs undefined
console.log(user?.user_names?.first_user);




