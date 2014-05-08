var hello = require("../hello");

var assert = require("assert");

var arr = new Uint8Array(8);
console.log(arr);
// f64a.buffer called, following log puts "true"
// arr.buffer
console.log(hello.hasIndexed(arr));
