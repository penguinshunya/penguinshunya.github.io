"use strict";

import { Othello } from "./core.js";
import { show } from "./ui.js";
import { routine } from "./computer.js";

const N = 8;
const EMPTY = 0;
const BLACK = 1;
const WHITE = 2;

let COMPUTER = 2;

const WIDTH = 64;

(() => {
  const cvs = document.getElementById("canvas");
  const ctx = cvs.getContext("2d");
  const message = document.getElementById("message");

  cvs.width = WIDTH * N;
  cvs.height = WIDTH * N;

  let othello = new Othello(N, EMPTY, BLACK, WHITE);

  show(ctx, othello, WIDTH);

  let turn = BLACK;
  let state = 0;

  const init = () => {
    othello.init();
    turn = BLACK;
    show(ctx, othello, WIDTH);
    message.textContent = "";
    state = 0;
  };

  const postProcessing = () => {
    message.textContent = "";
    turn = othello.enemy(turn);
    if (othello.can(turn)) {
      return;
    }
    message.textContent = `${turn == BLACK ? "黒" : "白"}はスキップしました`;
    turn = othello.enemy(turn);
    if (othello.can(turn)) {
      return;
    }
    const black = othello.count(BLACK);
    const white = othello.count(WHITE);
    if (black > white) {
      message.textContent = `${black} vs ${white} 黒の勝ち`;
    } else if (black < white) {
      message.textContent = `${black} vs ${white} 白の勝ち`;
    } else {
      message.textContent = `${black} vs ${white} 引き分け`;
    }
    message.textContent += " 盤面をクリックして次のゲームへ";
    state = 1;
  };

  cvs.addEventListener("click", e => {
    if (state == 2) {
      init();
      return;
    }
    if (state != 0) {
      return;
    }
    if (COMPUTER == -1 || turn == COMPUTER) {
      return;
    }
    const x = Math.floor(e.offsetX / WIDTH);
    const y = Math.floor(e.offsetY / WIDTH);
    if (!othello.put(x, y, turn)) {
      return;
    }
    show(ctx, othello, WIDTH);
    postProcessing();
  });

  // event loop
  window.setInterval(() => {
    if (state == 0) {
      if (COMPUTER != -1 && turn != COMPUTER) {
        return;
      }
      routine(othello, turn);
      show(ctx, othello, WIDTH);
      postProcessing();
    }
    if (state == 1) {
      state = 2;
    }
  }, 100);

  document.querySelectorAll("input[name='vs']").forEach(elem => {
    elem.addEventListener("click", _ => {
      COMPUTER = +elem.value;
      init();
    });
  });
})();