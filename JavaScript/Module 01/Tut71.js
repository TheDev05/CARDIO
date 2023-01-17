"use strict";

// This keyword
// This keyword, for instance we can understand it as a preudo copy of caller object which is used to call properties within an object

const players = {
    "player_name": "Ankit",
    "player_age": 20,

    "print_detail": function () {
        console.log(`Player is ${this.player_name} & his age is ${this.player_age}`);
    }
};

console.log(players.player_name);
players.print_detail();
