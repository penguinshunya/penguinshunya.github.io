import { deepCopy } from "./function.js";

function count_places_to_put(othello, turn) {
  let res = 0;
  for (let i = 0; i < othello.n; i++)
  for (let j = 0; j < othello.n; j++) {
    if (othello.put(i, j, turn, deepCopy(othello.board))) {
      res += 1;
    }
  }
  return res;
}

function count_stone(othello, turn) {
  let res = 0;
  for (let i = 0; i < othello.n; i++)
  for (let j = 0; j < othello.n; j++) {
    if (othello.board[i][j] == turn) {
      res += 1;
    }
  }
  return res;
}

export function routine(othello, turn) {
  let lst = [];
  for (let i = 0; i < othello.n; i++)
  for (let j = 0; j < othello.n; j++) {
    if (othello.put(i, j, turn, deepCopy(othello.board))) {
      const c1 = count_places_to_put(othello, turn);
      const c2 = count_places_to_put(othello, othello.enemy(turn));
      let point;
      if (c1 == 0 && c2 == 0) {
        const c1 = count_stone(othello, turn);
        const c2 = count_stone(othello, othello.enemy(turn));
        point = c1 - c2;
      } else {
        point = c1 - c2;
      }
      lst.push({ x: i, y: j, point });
    }
  }
  lst.sort((a, b) => b.point - a.point);
  const len = lst.length;
  console.assert(len > 0);
  let arr = new Array(len);
  for (let i = 0; i < len; i++) {
    arr[i] = 1 << i;
  }
  const max = arr[len - 1];
  const x = Math.floor(Math.random() * max);
  for (let i = 0; i < len; i++) {
    const l = i == 0 ? 0 : arr[i - 1];
    const r = arr[i];
    if (l <= x && x < r) {
      othello.put(lst[i].x, lst[i].y, turn);
      return;
    }
  }
  console.assert(false);
}