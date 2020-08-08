"use strict";

export function deepCopy(x) {
  if (!Array.isArray(x)) {
    return x;
  }
  let ret = [];
  for (let i = 0; i < x.length; i++) {
    ret.push(deepCopy(x[i]));
  }
  return ret;
}
