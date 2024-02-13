#!/usr/bin/node
const o_lList = require('./100-data').list;
console.log(o_List);
const mapList = o_List.map (function (e, index) {
  return (e * index);
});
console.log(mapList);
