const express = require("express");
const app = express();

const { connectMongo: db } = require("./DbConnect");

// parse request body into json, to use as req.body.name etc
app.use(express.json());

app.get("/", async (req, res) => {
  try {
    const collection = await db();
    console.log(req);
    const data = await collection
      .find({ CategoryName: req.body.CategoryName })
      .toArray();

    res.send(data);
    console.log("Data sent");
  } catch (error) {
    console.log(error);
  }
});

app.post("/", async (req, res) => {
  try {
    const collection = await db();
    const response = await collection.insertOne({
      name: req.body.name,
      author: req.body.author,
    });

    res.send(response);
  } catch (error) {
    console.log(error);
  }
});

app.put("/", async (req, res) => {
  try {
    const collection = await db();
    const response = await collection.updateOne(
      { name: req.body.name },
      { $set: { name: req.body.newName } }
    );

    res.send(response);
  } catch (error) {
    console.log(error);
  }
});

app.delete("/", async (req, res) => {
  try {
    const collection = await db();
    const response = await collection.deleteOne({ name: req.body.name });
    res.send(response);
  } catch (error) {
    console.log(error);
  }
});

app.listen(5000, () => {
  console.log("Listening at 5000");
});
