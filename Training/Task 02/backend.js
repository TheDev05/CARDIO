const express = require("express");
const mongoose = require("mongoose");

const URL =
  "mongodb+srv://TheDev05:TheDev05@cluster0.pclim9q.mongodb.net/GoFood?retryWrites=true&w=majority";

// form data schema
const schema = mongoose.Schema({
  email: { type: String },
  password: { type: String },
  contact: { type: Number },
  address: { type: String },
  landmark: { type: String },
  city: { type: String },
});

const model = mongoose.model("form-data", schema);

// mongodb connection for form data entry
async function database() {
  try {
    await mongoose.connect(URL);
    console.log("db connect");
    return model;
  } catch (err) {
    console.log(err);
  }
}

const app = express();
app.use(express.json());

// CORS
const cors = require("cors");
app.use(cors());

app.post("/", async (req, res) => {
  try {
    console.log(req);
    const collection = await database();
    const response = await collection.create(req.body);
    console.log(response);
    res.json(response);
  } catch (error) {
    console.error("Error:", error);
    res.status(500).send("Internal Server Error");
  }
});

// guest signup data schema
const form_user_schema = mongoose.Schema({
  email: { type: String },
  password: { type: String },
  fname: { type: String },
  lname: { type: String },
});

const form_user_model = mongoose.model("form-user-data", form_user_schema);

// guest register API
app.post("/guest-register", async (req, res) => {
  try {
    console.log(req.body.email);

    await database();
    const collection = form_user_model;
    const response = await collection.findOne({ email: req.body.email });
    if (response) {
      res.status(400).json({ success: false, message: "user already exist" });
    } else {
      collection.create(req.body);
      res.status(201).json({ success: true, message: "User Registered" });
    }
  } catch (error) {
    console.log(error);
  }
});

// guest login API
app.post("/guest-login", async (req, res) => {
  try {
    console.log(req.body.email);

    await database();
    const collection = form_user_model;
    const response = await collection.findOne({ email: req.body.email });
    if (response == null) {
      res.status(400).json({ success: false, message: "user doesn't exist" });
    }

    if (response.password != req.body.password) {
      res.status(401).json({ success: false, message: "Incorrect Password" });
    }

    res.status(200).json({ success: true, message: "user login succesful" });
  } catch (error) {
    console.log(error);
  }
});

// admin login API
app.post("/admin-login", async (req, res) => {
  try {
    console.log(req.body.email);

    if (
      req.body.email == "a.singh725098@gmail.com" &&
      req.body.password == "23123"
    ) {
      res.status(200).json({ success: true, message: "Admin login succesful" });
    } else {
      res.status(400).json({ success: false, message: "Incorrect Password" });
    }
  } catch (error) {
    console.log(error);
  }
});

// all registred guest user data retrival
app.get("/data", async (req, res) => {
  try {
    await database();
    const collection = form_user_model;
    const data = await collection.find();

    console.log("data", data);
    res.status(200).json({ success: true, data: data });
  } catch (error) {
    // console.log(error);
    res.status(400).json({ success: false, message: error });
  }
});

// User removal API
app.delete("/remove-user", async (req, res) => {
  try {
    console.log("delete", req.body);

    await database();
    const collection = form_user_model;
    const response = await collection.deleteOne({ _id: req.body.id });
    res.status(200).json({ success: true, message: "User removed" });
  } catch (error) {
    console.log(error);
  }
});

// Listining at port 5000
app.listen(5000, () => {
  console.log("listening");
});
