const { connectMongo } = require("./MongoDB");

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

    if (response) console.log("Inserted");
  } catch (error) {
    console.log(error);
  }
}

writeData();
