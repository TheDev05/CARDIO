const mongoose = require("mongoose");
const URL = "http://demo.com";

async function database() {
  try {
    await mongoose.connect(URL);
    console.log("db connect");

    const schema = mongoose.Schema({ name: "string" });
    const collection = mongoose.model("newCollection", schema);

    return collection
  } catch (err) {
    console.log(err);
  }
}

module.exports database;

// **

const express = require('express');
const app = express();

app.use(express.json());

const db = require('database_path');
app.get('/',async(req, res)=>{
const colllection = await db();
const response = colllection.findOne({name : req.name});
})

// **

const express=require('express');
const app = express();

app.get('/', (req, res) =>{
    res.send("running on server");
})

app.listen(3000, ()=>{
    console.log('listening');
})

// **

import {useContext, useReducer} from react
const cartContext = createContext();

const reduce=(state, action)=>{
    switch(action.type)
    {
        case "ADD" : return [...state, action.value];
    }
}

const cart(children)=>{
    const [state, dispatch]= usereducer(reduce, []);
    <cartContext.provider value ={state, dispatch}>
    {children}
    </cartContext.provider>
}

module.exports(cart);

import {useContext} from react;
import cartContext from "path"

const {dispatch} = useContext(cartContext);
<button onclick={(e)=>dispatch({action.value = "APPLE", action = "ADD"})}>
Add apple
</button>

// ***

const exprees = require('express');
const app = express();
app.use(express.json());
const bcrypt = require('bcrypt');

app.get('/signup',async(req, res)=>{
const collection = await db();
const response = collection.findOne({req.email})
if(response)res.json({"message":"user already exsit"})
else {
    const salt=bcrypt.gensalt(10);
    const crypted = brcrypt.hash(response.password, salt);
    const user = await collection.create({email:req.email, email:crypted})
    console.log(user);
}
})

app.get('/login',async(req, res)=>{
const collection = await db();
if(collection.findOne(req.email))
{
if(bcrypt.compare(req.password, response.password))
{
res.send({"sucess":"login success"})
}else res.send({"error":"password incorrect"})
}else res.send({"error":"user doesnot exist"});
})

if(response.success)
localStorage.setItem("token", id);

// **

create table student(
    name varchar(20),
    age int,
)

insert into table(name, age, roll)
value("ankit", 23, "20BCS9281")

// ***

import {createContext, usereducer}  from react;

const cartContext = createContext();

const reduce=(state, action)=>{
    switch(action.type)
    {
        case "ADD" : return [...state, action.value];
    }
}

const cart=(children)=>{
    const [state, dispatch] = useReducer(reduce, []);
    <cartContext.provider value={state, dispatch}>
        {children}
    </cartContext.provider>
}

module.export {cart, cartContext};

import CartContext from './path';
import useContext from react;

const function=()=>{
    <button onclick={(e)=>{dispatch({action.type:"ADD", action.value:"APPLE"})}}>ADD APPLE</button>
}

// ***

const mongoose = require('mongoose');
const express = require('express');
const app = express();

app.use(express.json());

const URL = "url"
const connect2db=asyc()=>{
try{
    await mongoose.connect(url);
    const schema = mongoose.Schema({name:"String"});
    const collection = mongoose.model("new_collection", schema);
    return collection;
}
catch(error){
    console.log(error);
}
}

module.export {connect2db};

// **

app.get('/', async(req, res)=>{
const collection = await connect2db();
const response = collection.findOne({name:req.name});
})

app.listen(3000,()=>{
    console.log(listening at 3000);
})

// **

const bcrypt = require('bcrypt')
app.get('/signup', asyc(req, res)=>{
try{
    const collection = await db();
    const response = collection.findOne({email:req.email})
    if(response)
    {
        res.send({"error":"user already exist"})
    }else
    {
        const salt= bcrypt.genSalt(10);
        const crypted = bcrypt.hash(req.password, salt);

        collection.create({
            email:req.email,
            password:crypted;
        })

        res.send({"success":"user created"});
    }
}
catch(error)
{
    console.log(error);
}
})

app.get('/login', async(req, res)=>{
try{
    const collection = await db();
const response = cosllection.findOne({email:req.email});
if(response)
{
if(bcrypt.compare(collection.password, req.password))
{
res.send({"success":"login succesful"})
}else res.send({"error" : "invalid password"})
}else res.send({"error":"user not exist, sign up first"})
}catch(error)
{
    console.log(error);
}
})

// ***

import {useReducer, createContext} from react;

const cartContext = createContext();

const reduce=(state, action)=>{
    switch(action.type)
    {
        case "ADD" : return [...state, action.value];
        case "REMOVE" : state.filter((state_value)=>{return action.value != state_value})
    }
}

const cart = (children)=>{
    const [state, dispatch] = useReducer(reduce,[]);
<CartContext.provider value = {state, dispatch}>
    {children}
</CartContext.provider>
}

exoprts {cart, cartContext};

import {CartContext} from ".path";
import {useContext} from react;

const dispatch = useContext(cartContext);

<button onclick={()=>{dispatch({action.value:"APPLE", action.type:"ADD"})}}>click</button>

// ***

const express=require('express');
const app = express();

const bcrypt = require('bcrypt';)

app.use(express.json());

app.get('/signup',async(req, res)=>{
const collection=await db();
const response = await collection.findOne({email:req.email});
if(response)
{
    res.send({"error":"user already"})
}else{

    const salt = bcrypt.gensalt(10);
    const crypted = bcrypt.hash(req.password, salt);

    collection.create({
        email:req.email,
        password:crypted
    })

    res.send({"success":"user created"});
}
})

app.get('/login',async(res, res)=>{
const collection=await db();
const response = await collection.findOne({email:req.email});
if(response)
{
if(bcrypt.compare(req.password, response.password))
{
    res.send({"success":"user login"})
}else res.send({"error":"invalid password"});
}else{
    res.send({"error":"user not found"})
}
})

// ***

localStorage.setItem('token', id);
localStorage.getItem('token');

//*** 

/*
    1. MongoDB connection
    2. useContext & useReducer
    3. BcryptJs
    4. JWT storage
*/