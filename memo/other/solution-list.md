---
layout: default
title: 解法一覧 - ぺんぎんノート
---
<style>
#acc_xor {
  border-collapse: collapse;
}
#acc_xor th,
#acc_xor td {
  padding: 0 1em;
  text-align: center;
}
#acc_xor .zero {
  background-color: lemonchiffon;
}
#acc_xor .one {
  background-color: lavender;
}
details {
  margin: 0.3em 0;
}
summary {
  margin-bottom: 0.3em;
}
[data-point="300"] { color: #008000 }
[data-point="400"] { color: #00C0C0 }
[data-point="500"], [data-point="600"] { color: #0000FF }
[data-point="700"], [data-point="800"] { color: #C0C000 }
</style>
<div class="block" style="margin-bottom: 1em;">
<span data-point="300">★</span>：300点<br>
<span data-point="400">★</span>：400点<br>
<span data-point="500">★</span>：500〜600点<br>
<span data-point="700">★</span>：700〜800点<br>
</div>
<details>
  <summary>
    問題を言い換える
    <a data-point="400" href="https://atcoder.jp/contests/abc053/tasks/arc068_b">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc126/tasks/abc126_e">★</a>
    <a data-point="700" href="https://atcoder.jp/contests/arc082/tasks/arc082_c">★</a>
    <a data-point="800" href="https://atcoder.jp/contests/agc033/tasks/agc033_c">★</a>
  </summary>
  <div class="block">
    複雑な問題でも、問題を言い換える（抽象度を上げる）ことでシンプルな問題になります。
  </div>
</details>
<details>
  <summary>
    情報を削ぎ落とす
    <a data-point="400" href="https://atcoder.jp/contests/abc053/tasks/arc068_b">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc126/tasks/abc126_e">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc128/tasks/abc128_f">★</a>
  </summary>
  <div class="block">
    <ul style="margin: 0;">
      <li>順序が意味を持たない数列は、集合と考える</li>
      <li>時系列を無視する</li>
    </ul>
  </div>
</details>
<details>
  <summary>
    操作を逆順にする
    <a data-point="400" href="https://atcoder.jp/contests/abc120/tasks/abc120_d">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/agc032/tasks/agc032_a">★</a>
  </summary>
  <div class="block">
    そのままでは解けない問題が、操作を逆順にすることで解ける問題になることがあります。
  </div>
</details>
<details>
  <summary>
    値を求めようとするのではなく、既に値が求まっているものと考える
    <a data-point="400" href="https://atcoder.jp/contests/abc128/tasks/abc128_d">★</a>
  </summary>
</details>
<details>
  <summary>
    $A$で$B$を探索するのではなく、$B$で$A$を探索する
    <a data-point="500" href="https://atcoder.jp/contests/abc128/tasks/abc128_e">★</a>
  </summary>
</details>
<details>
  <summary>
    補集合を考える
    <a data-point="700" href="https://atcoder.jp/contests/arc058/tasks/arc058_c">★</a>
  </summary>
</details>
<details>
  <summary>
    偶奇で場合分けなど
    <a data-point="300" href="https://atcoder.jp/contests/abc050/tasks/arc066_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc053/tasks/arc068_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc066/tasks/arc077_a">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc111/tasks/arc103_b">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc128/tasks/abc128_f">★</a>
  </summary>
</details>
<details>
  <summary>
    再帰
    <a data-point="300" href="https://atcoder.jp/contests/abc045/tasks/arc061_a">★</a>
  </summary>
</details>
<details>
  <summary>
    全探索
    <a data-point="300" href="https://atcoder.jp/contests/abc042/tasks/arc058_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc045/tasks/arc061_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc062/tasks/arc074_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc074/tasks/arc083_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc128/tasks/abc128_c">★</a>
  </summary>
</details>
<details>
  <summary>
    bit全探索
    <a data-point="300" href="https://atcoder.jp/contests/abc128/tasks/abc128_c">★</a>
  </summary>
</details>
<details>
  <summary>
    $\sqrt N$個全探索
    <a data-point="300" href="https://atcoder.jp/contests/abc057/tasks/abc057_c">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc044/tasks/arc060_b">★</a>
  </summary>
</details>
<details>
  <summary>
    深さ優先探索
    <a data-point="300" href="https://atcoder.jp/contests/abc054/tasks/abc054_c">★</a>
  </summary>
</details>
<details>
  <summary>
    幅優先探索
    <a data-point="300" href="https://atcoder.jp/contests/agc033/tasks/agc033_a">★</a>
  </summary>
</details>
<details>
  <summary>
    累積和
    <a data-point="300" href="https://atcoder.jp/contests/abc067/tasks/arc078_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc122/tasks/abc122_c">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc125/tasks/abc125_c">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc105/tasks/abc105_d">★</a>
  </summary>
  <div class="block">
    加算、乗算、XOR、GCD、LCM、min、max。これらは結合則が成り立つため累積可能です。
  </div>
</details>
<details>
  <summary>
    約数の個数
    <a data-point="300" href="https://atcoder.jp/contests/abc052/tasks/arc067_a">★</a>
  </summary>
  <div class="block">
    約数の個数は、素因数分解したときのそれぞれの指数に1を足したものの積で表せます。たとえば$720$の約数の個数は、$720 = 2^4 + 3^2 + 5^1$、$(4 + 1)(2 + 1)(1 + 1) = 30$となり、$30$個だとわかります。この個数には、$1$や自分自身の数も含まれます。
  </div>
</details>
<details>
  <summary>
    個数の最大値（最小値）を、不等式を解いて求める
    <a data-point="300" href="https://atcoder.jp/contests/abc046/tasks/arc062_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc053/tasks/arc068_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc055/tasks/arc069_a">★</a>
  </summary>
  <div class="block">
    個数の最大値や最小値を求めるとき、解きたい問題を不等式で表した後、その不等式を式変形することで解くことができます。求めたいものが個数であるため、切り捨てや切り上げを使って整数にします。
  </div>
</details>
<details>
  <summary>
    コーナーケース
    <a data-point="300" href="https://atcoder.jp/contests/abc064/tasks/abc064_c">★</a>
  </summary>
</details>
<details>
  <summary>
    map
    <a data-point="300" href="https://atcoder.jp/contests/abc061/tasks/abc061_c">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc073/tasks/abc073_c">★</a>
  </summary>
</details>
<details>
  <summary>
    deque
    <a data-point="300" href="https://atcoder.jp/contests/abc066/tasks/arc077_a">★</a>
  </summary>
</details>
<details>
  <summary>
    動的計画法
    <a data-point="300" href="https://atcoder.jp/contests/abc044/tasks/arc060_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc049/tasks/arc065_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc063/tasks/arc075_a">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc054/tasks/abc054_d">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc060/tasks/arc073_b">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc113/tasks/abc113_d">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc118/tasks/abc118_d">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc056/tasks/arc070_b">★</a>
    <a data-point="700" href="https://atcoder.jp/contests/arc058/tasks/arc058_c">★</a>
    <a data-point="700" href="https://atcoder.jp/contests/abc077/tasks/arc084_b">★</a>
    <a data-point="700" href="https://atcoder.jp/contests/arc083/tasks/arc083_c">★</a>
  </summary>
</details>
<details>
  <summary>
    DPっぽいけど制約で解けない
    <a data-point="300" href="https://atcoder.jp/contests/abc046/tasks/arc062_b">★</a>
  </summary>
</details>
<details>
  <summary>
    ソートして貪欲
    <a data-point="300" href="https://atcoder.jp/contests/abc063/tasks/arc075_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc121/tasks/abc121_c">★</a>
  </summary>
</details>
<details>
  <summary>
    何通りかを求めるときのDP
    <a data-point="300" href="https://atcoder.jp/contests/abc044/tasks/arc060_a">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc122/tasks/abc122_d">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc104/tasks/abc104_d">★</a>
    <a data-point="700" href="https://atcoder.jp/contests/arc058/tasks/arc058_c">★</a>
  </summary>
</details>
<details>
  <summary>
    部分和問題のDP
    <a data-point="300" href="https://atcoder.jp/contests/abc044/tasks/arc060_a">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc054/tasks/abc054_d">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc056/tasks/arc070_b">★</a>
  </summary>
</details>
<details>
  <summary>
    最初を決めればすべてが決まる
    <a data-point="300" href="https://atcoder.jp/contests/abc059/tasks/arc072_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc062/tasks/arc074_a">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc055/tasks/arc069_b">★</a>
  </summary>
  <div class="block">
    最初を決めれば芋づる式にすべてが決まることがあります。このようなときは、最初を全探索すればよいです。
  </div>
</details>
<details>
  <summary>
    いもす法
    <a data-point="300" href="https://atcoder.jp/contests/abc127/tasks/abc127_c">★</a>
  </summary>
</details>
<details>
  <summary>
    バケツソート
    <a data-point="300" href="https://atcoder.jp/contests/abc061/tasks/abc061_c">★</a>
  </summary>
</details>
<details>
  <summary>
    最小公倍数
    <a data-point="300" href="https://atcoder.jp/contests/abc070/tasks/abc070_c">★</a>
  </summary>
</details>
<details>
  <summary>
    期待値の式変形
    <a data-point="300" href="https://atcoder.jp/contests/abc078/tasks/arc085_a">★</a>
  </summary>
  <div class="block">
    求めたい期待値を$X$とおいて式で表し、式変形することで解くことができます。
  </div>
</details>
<details>
  <summary>
    $X$と$Y$を独立して考える
    <a data-point="300" href="https://atcoder.jp/contests/abc074/tasks/arc083_a">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc127/tasks/abc127_e">★</a>
  </summary>
</details>
<details>
  <summary>
    $_nC_r$
    <a data-point="400" href="https://atcoder.jp/contests/abc057/tasks/abc057_d">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc127/tasks/abc127_e">★</a>
  </summary>
</details>
<details>
  <summary>
    半開区間$[A, B)$を、$[0, A)$と$[0, B)$に分解する
    <a data-point="400" href="https://atcoder.jp/contests/abc121/tasks/abc121_d">★</a>
  </summary>
</details>
<details>
  <summary>
    UnionFind
    <a data-point="400" href="https://atcoder.jp/contests/abc049/tasks/arc065_b">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc120/tasks/abc120_d">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc126/tasks/abc126_e">★</a>
  </summary>
  <div class="block">
    集合同士を結合したり、2つの要素が同じ集合に属するかどうかを高速に判定するデータ構造です。
  </div>
</details>
<details>
  <summary>
    数列$0, 1, 2, \ldots$の累積XOR和の周期性
    <a data-point="400" href="https://atcoder.jp/contests/abc121/tasks/abc121_d">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc126/tasks/abc126_f">★</a>
  </summary>
  <div class="block">
    <p style="margin-top: 0;">初項0、公差1の等差数列の累積XOR和をとったときに周期性が現れます。</p>
    <div class="wrapping">
      <table id="acc_xor" border="1">
        <tr><th>要素</th><td>0</td><td>1</td><td>2</td><td>3</td><td>4</td><td>5</td><td>6</td><td>7</td><td>8</td><td>9</td><td>10</td><td>11</td><td>12</td><td>13</td><td>14</td><td>15</td></tr>
        <tr><th>XOR</th><td>0</td><td class="one">1</td><td>3</td><td class="zero">0</td><td>4</td><td class="one">1</td><td>7</td><td class="zero">0</td><td>8</td><td class="one">1</td><td>11</td><td class="zero">0</td><td>12</td><td class="one">1</td><td>15</td><td class="zero">0</td></tr>
      </table>
    </div>
    <div class="wrapping">
    \begin{alignat*}{1}
    \left\{
    \begin{array}{ll}
    i &(i \bmod 4 = 0)\\
    1 &(i \bmod 4 = 1)\\
    i + 1 &(i \bmod 4 = 2)\\
    0 &(i \bmod 4 = 3)
    \end{array}
    \right.
    \end{alignat*}
  </div>
</details>
<details>
  <summary>
    周期性のある部分の個数を記号に置き換える
    <a data-point="400" href="https://atcoder.jp/contests/abc121/tasks/abc121_d">★</a>
  </summary>
  <div class="block">
    たとえば11001100...という1と0からなる数列の、$N$番目までの1の個数を数えるときに、周期性のある部分の個数を$C$とおくことで、1の個数を$C \times 2 + \min((N - C \times 4), 4)$という一つの式で表せます（$\min$の部分はAdhocな考察が必要です）。そして$C$についても、$C = \lfloor N / 4 \rfloor$という簡単な計算で求めることができます。</div>
</details>
<details>
  <summary>
    ランレングス圧縮
    <a data-point="400" href="https://atcoder.jp/contests/abc124/tasks/abc124_d">★</a>
  </summary>
</details>
<details>
  <summary>
    優先度付きキュー
    <a data-point="400" href="https://atcoder.jp/contests/abc053/tasks/arc068_b">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc123/tasks/abc123_d">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc127/tasks/abc127_d">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc127/tasks/abc127_f">★</a>
  </summary>
</details>
<details>
  <summary>
    XORは桁毎に見る
    <a data-point="400" href="https://atcoder.jp/contests/abc117/tasks/abc117_d">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc121/tasks/abc121_d">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc126/tasks/abc126_f">★</a>
  </summary>
</details>
<details>
  <summary>
    コイン両替問題のDP
    <a data-point="400" href="https://atcoder.jp/contests/abc118/tasks/abc118_d">★</a>
  </summary>
</details>
<details>
  <summary>
    dp配列から文字列を復元
    <a data-point="400" href="https://atcoder.jp/contests/abc118/tasks/abc118_d">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/arc081/tasks/arc081_c">★</a>
  </summary>
</details>
<details>
  <summary>
    最小値（最大値）を保持しながら数列を探索
    <a data-point="400" href="https://atcoder.jp/contests/abc047/tasks/arc063_b">★</a>
  </summary>
</details>
<details>
  <summary>
    $O(N!)$全探索
    <a data-point="400" href="https://atcoder.jp/contests/abc073/tasks/abc073_d">★</a>
  </summary>
  <div class="block">
    <code>next_permutation()</code>を使って$N!$通りの探索を行います。
  </div>
</details>
<details>
  <summary>
    二分探索
    <a data-point="400" href="https://atcoder.jp/contests/abc119/tasks/abc119_d">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc056/tasks/arc070_b">★</a>
  </summary>
</details>
<details>
  <summary>
    modの累積和を取る
    <a data-point="400" href="https://atcoder.jp/contests/abc105/tasks/abc105_d">★</a>
  </summary>
</details>
<details>
  <summary>
    絶対値は符号を両方試す
    <a data-point="400" href="https://atcoder.jp/contests/abc100/tasks/abc100_d">★</a>
  </summary>
</details>
<details>
  <summary>
    1桁目が1の素数を5個足せば合成数になる
    <a data-point="400" href="https://atcoder.jp/contests/abc096/tasks/abc096_d">★</a>
  </summary>
</details>
<details>
  <summary>
    $_nC_r$の値は、$n$が大きいほど大きくなり、$r$が$n / 2$に近づくほど大きくなる
    <a data-point="400" href="https://atcoder.jp/contests/abc094/tasks/arc095_b">★</a>
  </summary>
</details>
<details>
  <summary>
    ワーシャルフロイド法
    <a data-point="400" href="https://atcoder.jp/contests/abc051/tasks/abc051_d">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc073/tasks/abc073_d">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc074/tasks/arc083_b">★</a>
  </summary>
</details>
<details>
  <summary>
    ベルマンフォード法
    <a data-point="400" href="https://atcoder.jp/contests/abc061/tasks/abc061_d">★</a>
  </summary>
</details>
<details>
  <summary>
    傾き1の直線を傾き0の直線にする
    <a data-point="500" href="https://atcoder.jp/contests/abc128/tasks/abc128_e">★</a>
  </summary>
</details>
<details>
  <summary>
    Win-Lose Algorithm
    <a data-point="500" href="https://atcoder.jp/contests/abc059/tasks/arc072_b">★</a>
  </summary>
</details>
<details>
  <summary>
    イベントソート
    <a data-point="500" href="https://atcoder.jp/contests/abc128/tasks/abc128_e">★</a>
  </summary>
</details>
<details>
  <summary>
    座標圧縮
    <a data-point="500" href="https://atcoder.jp/contests/abc128/tasks/abc128_e">★</a>
  </summary>
</details>
<details>
  <summary>
    セグメントツリー
    <a data-point="500" href="https://atcoder.jp/contests/abc128/tasks/abc128_e">★</a>
  </summary>
</details>
<details>
  <summary>
    $\sum$の交換、$\sum$の分解
    <a data-point="500" href="https://atcoder.jp/contests/abc058/tasks/arc071_b">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc127/tasks/abc127_e">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc127/tasks/abc127_f">★</a>
  </summary>
  <div class="block">
    以下の数式を利用することで、計算量を落とせることがあります。
    $$\sum_{i=1}^m (a_i + b_i) = \sum_{i=1}^m a_i + \sum_{i=1}^m b_i$$
    $$\sum_{i=1}^m \sum_{j=1}^n a_{ij} = \sum_{j=1}^n \sum_{i=1}^m a_{ij}$$
    $$\sum_{i=1}^m \sum_{j=1}^n a_ib_j = \sum_{i=1}^m a_i \sum_{j=1}^n b_j $$
  </div>
</details>
<details>
  <summary>
    約数の個数分だけ全探索
    <a data-point="500" href="https://atcoder.jp/contests/chokudai_S002/tasks/chokudai_S002_j">★</a>
  </summary>
  <div class="block">
    $1 \le N \le 10^9$を満たす$N$の、約数の個数の最大は$1344$個（$N = 73513440$）。この少なさを利用して計算量を落とせることがあります。ちなみに、約数の列挙は$O(\sqrt N)$でできます。
  </div>
</details>
<details>
  <summary>
    <code>next(int i, char c)</code>という関数を定義する
    <a data-point="600" href="https://atcoder.jp/contests/arc081/tasks/arc081_c">★</a>
  </summary>
</details>
<details>
  <summary>
    3つのうちの真ん中を固定
    <a data-point="600" href="https://atcoder.jp/contests/abc102/tasks/arc100_b">★</a>
  </summary>
</details>
<details>
  <summary>
    2冪の網羅性
    <a data-point="600" href="https://atcoder.jp/contests/abc111/tasks/arc103_b">★</a>
  </summary>
</details>
<details>
  <summary>
    $f(x) = |x - a| + b$という形で表せる関数は凸関数
    <a data-point="600" href="https://atcoder.jp/contests/abc127/tasks/abc127_f">★</a>
  </summary>
</details>
<details>
  <summary>
    凸関数同士を足すと凸関数になる
    <a data-point="600" href="https://atcoder.jp/contests/abc127/tasks/abc127_f">★</a>
  </summary>
</details>
<details>
  <summary>
    数直線上に複数の点があるとき、すべての点との距離の和が最小となる位置は、中央の点の位置
    <a data-point="600" href="https://atcoder.jp/contests/abc127/tasks/abc127_f">★</a>
  </summary>
</details>
<details>
  <summary>
    木DP
    <a data-point="700" href="https://atcoder.jp/contests/arc083/tasks/arc083_c">★</a>
  </summary>
</details>
<details>
  <summary>
    Trie木
    <a data-point="700" href="https://atcoder.jp/contests/arc087/tasks/arc087_c">★</a>
  </summary>
</details>
<details>
  <summary>
    Grundy数
    <a data-point="700" href="https://atcoder.jp/contests/arc087/tasks/arc087_c">★</a>
  </summary>
</details>
<details>
  <summary>
    bitDP
    <a data-point="700" href="https://atcoder.jp/contests/arc058/tasks/arc058_c">★</a>
  </summary>
</details>
<details>
  <summary>
    木の直径
    <a data-point="800" href="https://atcoder.jp/contests/agc033/tasks/agc033_c">★</a>
  </summary>
  DFSを2回すれば求まります。
</details>
<details>
  <summary>
    補グラフを考える
    <a data-point="700" href="https://atcoder.jp/contests/agc032/tasks/agc032_b">★</a>
  </summary>
</details>
<details>
  <summary>
    $\times 2$と$+ 1$（$\times 10$と$+ 1$）
    <a data-point="700" href="https://atcoder.jp/contests/abc077/tasks/arc084_b">★</a>
    <a data-point="700" href="https://atcoder.jp/contests/abc108/tasks/arc102_b">★</a>
  </summary>
</details>
<details>
  <summary>
    Binary Indexed Tree
    <a data-point="700" href="https://atcoder.jp/contests/abc107/tasks/arc101_b">★</a>
    <a data-point="800" href="https://atcoder.jp/contests/arc088/tasks/arc088_c">★</a>
  </summary>
</details>
<details>
  <summary>
    転倒数
    <a data-point="700" href="https://atcoder.jp/contests/abc107/tasks/arc101_b">★</a>
    <a data-point="800" href="https://atcoder.jp/contests/arc088/tasks/arc088_c">★</a>
  </summary>
</details>
<details>
  <summary>
    最小カット
    <a data-point="700" href="https://atcoder.jp/contests/arc085/tasks/arc085_c">★</a>
  </summary>
</details>
<details>
  <summary>
    01BFS
    <a data-point="700" href="https://atcoder.jp/contests/abc077/tasks/arc084_b">★</a>
  </summary>
</details>
<details>
  <summary>
    変数を減らす
    <a data-point="800" href="https://atcoder.jp/contests/agc034/tasks/agc034_c">★</a>
  </summary>
</details>
<details>
  <summary>
    非負整数の最適化問題を、数列の問題に言い換える
    <a data-point="800" href="https://atcoder.jp/contests/agc034/tasks/agc034_c">★</a>
  </summary>
</details>
<details>
  <summary>
    $10^9 + 7$で割った余り
    <a data-point="300" href="https://atcoder.jp/contests/abc050/tasks/arc066_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc052/tasks/arc067_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc065/tasks/arc076_a">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc042/tasks/arc058_b">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc127/tasks/abc127_e">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc058/tasks/arc071_b">★</a>
  </summary>
</details>
<details>
  <summary>
    貪欲法
    <a data-point="300" href="https://atcoder.jp/contests/abc048/tasks/arc064_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc063/tasks/arc075_a">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc052/tasks/arc067_b">★</a>
    <a data-point="800" href="https://atcoder.jp/contests/arc088/tasks/arc088_c">★</a>
  </summary>
</details>
<details>
  <summary>
    Adhocな解法
    <a data-point="300" href="https://atcoder.jp/contests/abc046/tasks/arc062_b">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc047/tasks/arc063_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc051/tasks/abc051_c">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc058/tasks/arc071_a">★</a>
    <a data-point="300" href="https://atcoder.jp/contests/abc068/tasks/arc079_a">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc043/tasks/arc059_b">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc045/tasks/arc061_b">★</a>
    <a data-point="400" href="https://atcoder.jp/contests/abc069/tasks/arc080_a">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc048/tasks/arc064_b">★</a>
    <a data-point="500" href="https://atcoder.jp/contests/abc044/tasks/arc060_b">★</a>
    <a data-point="600" href="https://atcoder.jp/contests/abc050/tasks/arc066_b">★</a>
  </summary>
</details>
</div>
