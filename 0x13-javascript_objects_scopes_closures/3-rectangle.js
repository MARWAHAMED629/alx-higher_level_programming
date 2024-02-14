#!/usr/bin/node
class Rectangle {
  constructor (w, h) {
    if ((w > 0) && (h > 0)) {
      this.width = w;
      this.height = h;
    }
  }

  print () {
    for (let x = 0; x < this.height; x++) {
      let s = '';
      for (let z = 0; z < this.width; z++) {
        s += 'X';
      }
      console.log(s);
    }
  }
}

module.exports = Rectangle;
