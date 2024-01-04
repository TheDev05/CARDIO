const express = require("express");
const app = express();

// Custom M'wares created by developer itself,
// eg., Check user is login or not before buying or posting on websites
function validator(req, res, next) {
  /* Save used session id in cookies or localStorage, 
  and check here any session id exist or not in cookies */
  // .....

  console.log("Middleware intiated");
  // If approved/validated, handing controls over to next lines
  next();
}

// export and use in index.js (main), file as:
// application level, each request will go thru M'ware
app.use(validator);

// Specific to a particular route/path
app.use("/post", validator);
