#!/usr/bin/node
const { dict } = require('./101-data');
const n_dict = {};
for (const key in dict) {
  if (dict[key] in newdict) {
    n_dict[dict[key]].push(key);
  } else {
    n_dict[dict[key]] = [key];
  }
}
console.log(n_dict);
