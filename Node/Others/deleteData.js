const { connectMongo: db } = require("./DbConnect");

async function deleteData() {
  try {
    const collection = await db();
    const response = await collection.deleteOne({ CategoryName: "demo" });

    console.log(response);
  } catch (error) {
    console.log(error);
  }
}

deleteData();
