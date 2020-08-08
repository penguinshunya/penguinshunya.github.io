import { deepCopy } from "./function.js";

export function routine(othello, turn) {
  let lst = []
  for (let i = 0; i < othello.n; i++)
  for (let j = 0; j < othello.n; j++) {
    if (othello.put(i, j, turn, deepCopy(othello.board))) {
      lst.push([i, j]);
    }
  }
  console.assert(lst.length > 0);
  let idx = Math.floor(Math.random() * lst.length);
  othello.put(lst[idx][0], lst[idx][1], turn);
}