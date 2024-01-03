const { connectMongo } = require("./DbConnect");

async function updateData() {
  try {
    const collection = await connectMongo();
    const response = await collection.updateOne(
      { name: "demo1" },
      { $set: { name: "demo-demo" } }
    );

    console.log(response);
  } catch (error) {
    console.log(error);
  }
}

updateData();
