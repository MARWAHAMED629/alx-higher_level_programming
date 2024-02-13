#!/usr/bin/node

exports.converter = function (base) {
  return function (z) {
    return (z.toString(base));
  };
};
