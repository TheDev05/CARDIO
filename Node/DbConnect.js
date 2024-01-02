const mongoose = require("mongoose");
const path =
  "mongodb+srv://TheDev05:TheDev05@cluster0.pclim9q.mongodb.net/GoFood?retryWrites=true&w=majority";

async function connectMongo() {
  try {
    await mongoose.connect(path);
    const db = mongoose.connection.db;
    
    const collection = db.collection("food_items");
    console.log("Connected to DB");

    return collection;
  } catch (error) {
    console.log(error);
  }
}

module.exports = { connectMongo };
