const express = require("express");
const mongoose = require("mongoose");

const URL =
  "mongodb+srv://TheDev05:TheDev05@cluster0.pclim9q.mongodb.net/GoFood?retryWrites=true&w=majority";

const schema = mongoose.Schema({
  email: { type: String },
  password: { type: String },
  contact: { type: Number },
  address: { type: String },
  landmark: { type: String },
  city: { type: String },
});
const model = mongoose.model("form-data", schema);

async function database() {
  try {
    await mongoose.connect(URL);
    console.log("db connect");
    return model;
  } catch (err) {
    console.log(err);
  }
}

const app = express();
app.use(express.json());

const cors = require("cors");
app.use(cors());

app.post("/", async (req, res) => {
  try {
    console.log(req);
    const collection = await database();
    const response = await collection.create(req.body);
    console.log(response);
    res.json(response);
  } catch (error) {
    console.error("Error:", error);
    res.status(500).send("Internal Server Error");
  }
});

app.post("/", async (req, res) => {
  res.send("running");
});

app.listen(5000, () => {
  console.log("listening");
});
