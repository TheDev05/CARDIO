const { connectMongo } = require("./DbConnect");

async function readData() {
  try {
    const collection = await connectMongo();
    const data = await collection.find({}).toArray();
    console.log(data);
  } catch (error) {
    console.log(error);
  }
}

readData();
