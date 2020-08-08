export function show(ctx, othello, width) {
  const n = othello.n;
  ctx.clearRect(0, 0, n * width, n * width);
  for (let i = 0; i < n; i++)
  for (let j = 0; j < n; j++) {
    switch (othello.board[i][j]) {
      case othello.black:
        ctx.fillStyle = "black";
        break;
      case othello.white:
        ctx.fillStyle = "white";
        break;
      default:
        continue;
    }
    ctx.beginPath();
    ctx.arc(
      i * width + width / 2,
      j * width + width / 2,
      width / 2.2,
      0, Math.PI * 2, true);
    ctx.fill();
  }
  for (let i = 0; i <= n; i++) {
    ctx.beginPath();
    ctx.moveTo(i * width, 0);
    ctx.lineTo(i * width, n * width);
    ctx.moveTo(0, i * width);
    ctx.lineTo(n * width, i * width);
    ctx.stroke();
  }
}
