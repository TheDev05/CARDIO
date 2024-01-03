const { DbConnect } = require("./DbConnect");

// RESTful APIs & accesing express instances & methods
const express = require("express");
const app = express();

/* Calling NodeJs in-built M'ware function (express.json())
 to parse client requests from Json(string) to Js Object */
app.use(express.json());

// Reading Data
app.get("/", async (req, res) => {
  try {
    const collection = await DbConnect();
    const response = await collection.findOne(req.body);

    console.log(response);
    res.send(response);
  } catch (error) {
    console.log(error);
  }
});

// Creating Data
app.post("/", async (req, res) => {
  try {
    const collection = await DbConnect();
    const response = await collection.create(req.body);

    console.log(response);
    res.send(response);
  } catch (error) {
    console.log(error);
  }
});

// Updating Data
app.put("/", async (req, res) => {
  try {
    const collection = await DbConnect();

    // updateOne accept two params, first to search and second for updation
    const response = await collection.updateOne({ name: "Ankit" }, req.body);

    console.log(response);
    res.send(response);
  } catch (error) {
    console.log(error);
  }
});

// Delete Data
app.delete("/", async (req, res) => {
  try {
    const collection = await DbConnect();
    const response = await collection.deleteOne(req.body);

    console.log(response);
    res.send(response);
  } catch (error) {
    console.log(error);
  }
});

// server (here local host, our system) will listen at PORT 3000
app.listen(3000, () => {
  console.log("Listening at 3000");
});
