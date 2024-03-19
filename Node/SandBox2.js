const express = require("express");
const app = express();

app.use(express.json());

//DB Connection:
const URL =
  "mongodb+srv://TheDev05:TheDev05@cluster0.pclim9q.mongodb.net/GoFood?retryWrites=true&w=majority";

const mongoose = require("mongoose");
const schema = mongoose.Schema({
  name: String,
  password: String,
});
const collection = mongoose.model("new_model", schema);

const db = async () => {
  try {
    await mongoose.connect(URL);
    console.log("db connected");
    return collection;
  } catch (error) {
    console.log(error);
  }
};

// Bcrypt hashing of passwords
const userName = "Ankit Raj";
const userPassword = "Alpha2002";

const bcrypt = require("bcrypt");

app.get("/", async (req, res) => {
  const collection = await db();

  const salt = await bcrypt.genSalt(10);
  const crypt = await bcrypt.hash(userPassword, salt);

  const response = await collection.create({ name: userName, password: crypt });
  const findOne = await collection.findOne({ name: "Ankit Raj" });
  res.send(findOne);
});

// Dynamic Routing
app.get("/:userName", (req, res) => {
  res.send(`${req.params.userName}`);
});

app.listen(3000, () => {
  console.log("listening");
});
