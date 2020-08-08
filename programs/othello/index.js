"use strict";

import { Othello } from "./core.js";
import { show } from "./ui.js";
import { routine } from "./computer.js";

const N = 8;
const BLANK = 0;
const BLACK = 1;
const WHITE = 2;

let COMPUTER = -1;

const WIDTH = 64;

(() => {
  const cvs = document.getElementById("canvas");
  const ctx = cvs.getContext("2d");
  const message = document.getElementById("message");

  cvs.width = WIDTH * N;
  cvs.height = WIDTH * N;

  let othello = new Othello(N, BLANK, BLACK, WHITE);

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
    turn = othello.enemy(turn);
    if (othello.can(turn)) {
      return;
    }
    message.textContent = `${turn == BLACK ? "black" : "white"} skip.`;
    turn = othello.enemy(turn);
    if (othello.can(turn)) {
      return;
    }
    const black = othello.count(BLACK);
    const white = othello.count(WHITE);
    if (black > white) {
      message.textContent = `${black} vs ${white} black win.`;
    } else if (black < white) {
      message.textContent = `${black} vs ${white} white win.`;
    } else {
      message.textContent = `${black} vs ${white} draw.`;
    }
    state = 1;
  };

  cvs.addEventListener("click", e => {
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
      window.setTimeout(init, 3000);
    }
  }, 100);

  document.querySelectorAll("input[name='vs']").forEach(elem => {
    elem.addEventListener("click", _ => {
      COMPUTER = +elem.value;
      init();
    });
  });
})();