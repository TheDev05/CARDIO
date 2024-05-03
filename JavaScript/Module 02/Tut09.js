"use strict";

// Change Text
// textContext & inner Text

const val = document.getElementById("heading");

// We can assign new value
// val.textContent = "Hello World";

// textContent gets the content of all elements, including <script> and <style> elements. In contrast, innerText only shows "human-readable" elements, i.e not shows display:hidden elemets

console.log(val.textContent)
console.log(val.innerText);

