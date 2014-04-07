var hello = require("../hello");

var assert = require("assert");

console.log(hello.hello());
assert(hello.hello(), "world");
