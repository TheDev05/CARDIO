const mongoose = require("mongoose");

const URL =
  "mongodb+srv://TheDev05:TheDev05@cluster0.pclim9q.mongodb.net/GoFood?retryWrites=true&w=majority";

// Connecting to DB
async function DbConnect() {
  try {
    await mongoose.connect(URL);
    console.log("Db Connect");

    /* If there are muntiple collection, use diffrent schemas
    for them & store into diffrent files then import to use */
    const schema = mongoose.Schema({
      name: String,
    });

    const collection = mongoose.model("food_items", schema);
    return collection;

  } catch (error) {
    console.log(error);
  }
}

module.exports = { DbConnect };

// jwt: localStorage.setitme-getitem
