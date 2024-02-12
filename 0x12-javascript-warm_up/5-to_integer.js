#!/usr/bin/node
const n = math.floor(Number(process.argv[2]));
console.log(isNaN(n) ? 'Not a Number' : 'My number : ${n}');
