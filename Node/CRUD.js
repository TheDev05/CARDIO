const mongoose = require("mongoose");
const { Schema } = require("mongoose");

const { connectMongo: db } = require("./DbConnect");

async function writeDB() {
  try {
    const collection = db();
    const schema = new Schema({
      name: String,
    });

    // Now the collection "food_items" have schema and renamed as user
    const user = mongoose.model("food_items", schema);
    const response = await user.create({ name: "Biryani" });

    console.log(response);
  } catch (error) {
    console.log(error);
  }
}

// writeDB();

async function readDB() {
  try {
    const collection = db();
    const schema = new Schema({
      name: String,
    });

    const user = mongoose.model("food_items", schema);
    const response = await user.find({ name: "Biryani" });
    console.log(response);
  } catch (error) {
    console.log(error);
  }
}

// readDB();

async function updateDB() {
  try {
    const collection = db();
    const schema = new Schema({
      name: String,
    });
    const newCollection = mongoose.model("food_items", schema);
    const response = await newCollection.updateMany(
      { name: "Biryani" },
      { name: "Ankit" }
    );

    console.log(response);
  } catch (error) {
    console.log(error);
  }
}

// updateDB();

async function deleteDB() {
  try {
    const collection = db();
    const schema = new Schema({
      name: String,
    });
    const newCollection = mongoose.model("food_items", schema);
    const response = await newCollection.deleteMany({ name: "Ankit" });

    console.log(response);
  } catch (error) {
    console.log(error);
  }
}

// deleteDB();
