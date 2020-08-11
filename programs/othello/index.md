---
layout: default
title: オセロ
---
<div style="display:flex;">
  <canvas id="canvas" style="background-color: green;"></canvas>
  <div id="option">
    <label><input type="radio" name="vs" value="-1">コンピュータ vs コンピュータ</label><br>
    <label><input type="radio" name="vs" value="0">プレイヤー vs プレイヤー</label><br>
    <label><input type="radio" name="vs" value="1">コンピュータ vs プレイヤー</label><br>
    <label><input type="radio" name="vs" value="2" checked="checked">プレイヤー vs コンピュータ</label><br>
  </div>
</div>
<div id="message"></div>
<script src="./index.js" type="module"></script>