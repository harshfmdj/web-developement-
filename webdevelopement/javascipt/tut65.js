const { SSL_OP_TLS_BLOCK_PADDING_BUG } = require("constants")

// Synchronous or blocking
// -line by line execution
//Asynchronous or non blockng
// -line by line execution not guaranted
// calll backs will fire
const fs = require("fs")
fs.readFileSync("del.txt", "utf-8", (a, b) => {
    console.log(a, b);
});
console.log("this is a message");