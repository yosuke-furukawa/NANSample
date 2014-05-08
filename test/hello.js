var hello = require("../hello");

var assert = require("assert");

var f64a = new Uint8Array(8);
f64a[0] = 123;
console.log(f64a);
console.log(hello.hasIndexed(f64a));
assert(hello.hasIndexed(f64a), true);
