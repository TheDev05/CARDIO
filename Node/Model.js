const mongoose = require("mongoose");
const { Schema } = require("mongoose");

const schema = new Schema({
  name: String,
  author: String,
  img: String,
  cost: Number,
});

module.exports = mongoose.model("food_items", schema);
