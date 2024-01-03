const express = require("express");
const app = express();

// Manual M'wares create by developer itself
function validator(req, res, next) {
  // extra essential task

  console.log("Middleware intiated");
  // Task completed, handing controls to next lines
  next();
}

// export and use in index.js (main) file as:
app.use(validator);
