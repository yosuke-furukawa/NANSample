var addon = require('./build/Release/addon');


var f64a = new Uint32Array(8);

// hasIndexed is true in v0.11, v0.10
addon.hello(f64a);

// hasIndexed is false in v0.11, but v0.10 is true...
addon.hello(f64a.buffer);
module.exports = addon;
