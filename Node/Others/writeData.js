const { connectMongo } = require("./DbConnect");

async function writeData() {
  try {
    const collection = await connectMongo();
    const response = await collection.insertOne({
      CategoryName: "demo",
      name: "demo",
      image: "demo",
      author: "demo",
      cost: "demo",
      img: "demo",
    });

    console.log(response);
  } catch (error) {
    console.log(error);
  }
}

writeData();
