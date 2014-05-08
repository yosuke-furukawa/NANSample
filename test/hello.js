var hello = require("../hello");

var assert = require("assert");

var arr = new Uint8Array(8);
console.log(arr);
// HasIndexedPropertiesInExternalArrayData is false
console.log(hello.hasIndexed(arr));
// if arr.buffer is called
arr.buffer;
// HasIndexedPropertiesInExternalArrayData is true
console.log(hello.hasIndexed(arr));
