const express = require("express");
const app = express();

const { connectMongo: db } = require("./DbConnect");
const newCollection = require("./Model");

app.use(express.json());

app.get("/", async (req, res) => {
  try {
    const collection = await db();
    const response = await newCollection.find({ name: req.body.name });
    console.log(response);
  } catch (error) {
    console.log(error);
  }
});

app.post("/", async (req, res) => {
  try {
    
  } catch (error) {
    console.log(error);
  }
});

app.listen(3000, () => {
  console.log("Listening");
});
