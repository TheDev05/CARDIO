const express = require("express");
const app = express();

app.use(express.json());

const mongoose = require("mongoose");
const url =
  "mongodb+srv://TheDev05:TheDev05@cluster0.pclim9q.mongodb.net/GoFood?retryWrites=true&w=majority";

const schema = mongoose.Schema({ email: "String" });
const collection = mongoose.model("collection", schema);

const connectDB = async () => {
  try {
    await mongoose.connect(url);
    console.log("connected");
    return collection;
  } catch (error) {
    console.log(error);
  }
};

app.get("/", async (req, res) => {
  try {
    const collection = await connectDB();
    const response = await collection.findOne({
      email: "bear@guest.com",
    });
    res.send(response);
    console.log(response);
  } catch (error) {
    console.log(error);
  }
});

app.listen(3000, () => {
  console.log("listening!");
});
