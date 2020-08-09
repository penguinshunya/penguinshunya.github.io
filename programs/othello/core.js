import { deepCopy } from "./function.js";

export class Othello {
  constructor(n, empty = 0, black = 1, white = 2) {
    console.assert(n % 2 == 0);
    this.n = n;
    this.empty = empty;
    this.black = black;
    this.white = white;
    this.init();
  }
  init() {
    const n = this.n;
    let board = new Array(n);
    for (let x = 0; x < n; x++) {
      board[x] = new Array(n).fill(this.empty);
    }
    board[n / 2 - 1][n / 2] = this.black;
    board[n / 2][n / 2 - 1] = this.black;
    board[n / 2 - 1][n / 2 - 1] = this.white;
    board[n / 2][n / 2] = this.white;
    this.board = board;
  }
  enemy(turn) {
    return turn == this.black ? this.white : this.black;
  }
  put(x, y, turn, board = this.board) {
    const dx = [1, 0, -1, 0, 1, 1, -1, -1];
    const dy = [0, 1, 0, -1, 1, -1, 1, -1];
    if (board[x][y] != this.empty) {
      return false;
    }
    let can = false;
    for (let i = 0; i < 8; i++) {
      let nx = x + dx[i];
      let ny = y + dy[i];
      if (nx < 0 || nx >= this.n || ny < 0 || ny >= this.n) {
        continue;
      }
      if (board[nx][ny] != this.enemy(turn)) {
        continue;
      }
      let ok = false;
      do {
        nx += dx[i];
        ny += dy[i];
        if (nx < 0 || nx >= this.n || ny < 0 || ny >= this.n) {
          break;
        }
        if (board[nx][ny] == this.empty) {
          break;
        }
        if (board[nx][ny] == turn) {
          ok = true;
        }
      } while (true);
      if (!ok) {
        continue;
      }
      can = true;
      nx = x + dx[i];
      ny = y + dy[i];
      while (board[nx][ny] == this.enemy(turn)) {
        board[nx][ny] = turn;
        nx += dx[i], ny += dy[i];
      }
    }
    if (can) {
      board[x][y] = turn;
    }
    return can;
  }
  can(turn) {
    let board = deepCopy(this.board);
    for (let i = 0; i < this.n; i++)
    for (let j = 0; j < this.n; j++) {
      if (this.put(i, j, turn, board)) {
        return true;
      }
    }
    return false;
  }
  count(turn) {
    let cnt = 0;
    for (let i = 0; i < this.n; i++)
    for (let j = 0; j < this.n; j++) {
      if (this.board[i][j] == turn) cnt += 1;
    }
    return cnt;
  }
}