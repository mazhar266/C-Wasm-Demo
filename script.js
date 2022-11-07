WebAssembly.instantiateStreaming(fetch('math.wasm'))
.then(prog => {
    console.log(prog.instance.exports.add(100, 10));
    console.log(prog.instance.exports.substract(100, 20));
    console.log(prog.instance.exports.multiply(100, 2));
    console.log(prog.instance.exports.divide(100, 25)); 
});
