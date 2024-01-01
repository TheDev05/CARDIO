// with Node.Js

// const http = require("http");

// const server = http.createServer((req, res) => {
//   res.end("Hello World");
// });

// server.listen(3000, () => {
//   console.log("Server running at, 3000");
// });

// with Express.Js

const express = require("express");
const app = express();

const validate = require("./Middleware").validator;

// const validate = (req, res, next) => {
//   console.log("Validatore");
//   next();
// };

app.use(validate);

app.get("/", (req, res) => {
  res.send("Hello World");
});

app.listen(3000, () => {
  console.log("Running");
});
