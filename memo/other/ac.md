---
layout: default
title: 挑戦した問題一覧
---
<style>
#container > ul {
  padding-left: 0;
}
#container > ul > li {
  overflow: hidden;
  white-space: nowrap;
  text-overflow: ellipsis;
}
h2 {
  padding: 0.25em 0.5em;/*上下 左右の余白*/
  color: #494949;/*文字色*/
  background: transparent;/*背景透明に*/
  border-left: solid 5px #7db4e6;/*左線*/
}
</style>

<h2>ACしたけど不安の残る問題</h2>
<ul id="fuan">
  <li><a target="_blank" href="https://atcoder.jp/contests/abc043/tasks/arc059_b">
    AtCoder ABC043 D - アンバランス</a>：証明。"aa"や"aba"を含まないとき、アンバランスな部分文字列は存在しない</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc044/tasks/arc060_b">
    AtCoder ABC044 D - 桁和</a>：$b \gt \sqrt n$のとき、$n$を$b$進数で表すと$2$桁の整数になる</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc048/tasks/arc064_b">
    AtCoder ABC048 D - An Ordinary Game</a>：証明。最終的な文字列は必ず"ababab..."の形。長さの偶奇は一意</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc064/tasks/abc064_d">
    AtCoder ABC064 D - Insertion</a>：括弧列の問題。なんとなくで解いてしまった</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc065/tasks/arc076_b">
    AtCoder ABC065 D - Built?</a>：辺の候補を減らして最小全域木。1つの辺を2つに分解</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc078/tasks/arc085_b">
    AtCoder ABC078 D - ABS</a>：$O(1)$解法もしくは<a target="_blank" href="https://atcoder.jp/contests/abc078/submissions/6127931">ゲームDP</a>（メモ化再帰）</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc086/tasks/arc089_b">
    AtCoder ABC086 D - Checker</a>：実装難。市松模様の正方形内にある点の個数を求める</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc087/tasks/arc090_b">
    AtCoder ABC087 D - People on a Line</a>：UnionFind木の拡張かDFS。DFSのほうが楽</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/arc033/tasks/arc033_3">
    AtCoder ARC033 C - データ構造</a>：個数のRSQ。写経AC。Treapでも解けそう</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1185/problem/F">
    Codeforces #568 (Div. 2) F. Two Pizzas</a>：小さな集合を扱うときはsetではなくbitを使う</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1180/problem/D">
    Codeforces #569 (Div. 2) D. Tolik and His Uncle</a>：構築系は自由度が高い分、複雑な方法を選択しがち</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1183/problem/H">
    Codeforces #570 (Div. 3) H. Subsequences (hard version)</a>：部分列DPに長さの情報を加える</li>
  <li><a target="_blank" href="https://yukicoder.me/problems/no/141">
    yukicoder No.141 魔法少女コバ</a>：解は必ず存在すること、解が一意に定まることを証明していない</li>
  <li><a target="_blank" href="https://yukicoder.me/problems/no/451">
    yukicoder No.451 575</a>：大きい要素と小さい要素が2つおきに交互に出現</li>
</ul>
<h2>ACしていない問題</h2>
<ul>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc076/tasks/abc076_d">
    AtCoder ABC076 D - AtCoder Express</a></li>
  <li><a target="_blank" href="https://codeforces.com/contest/1185/problem/G1">
    Codeforces #568 (Div. 2) G2. Playlist for Polycarp (hard version)</a>：DPをうまくやって状態数を減らすっぽい</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1180/problem/E">
    Codeforces #569 (Div. 2) E. Serge and Dining Room</a>：遅延セグ木を使うみたい</li>
</ul>
<h2>ACした問題</h2>
<ul id="ac">
  <li><a target="_blank" href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_5_C&lang=jp">
    AOJ Lowest Common Ancestor</a>：ダブリングの要素数は$2^{k-1} \ge |V| - 1$を満たす最小の$k$</li>
  <li><a target="_blank" href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B">
    AOJ Queue</a>：キューの使い方を学べる問題</li>
  <li><a target="_blank" href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A&lang=jp">
    AOJ Stack</a>：スタックの使い方を学べる問題</li>
  <li><a target="_blank" href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_F&lang=jp">
    AOJ Range Query - RMQ and RUQ</a>：遅延セグ木の練習問題。<a target="_blank" href="http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=3696009#1">提出コード</a></li>
  <li><a target="_blank" href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_G&lang=jp">
    AOJ Range Query - RSQ and RAQ</a>：遅延セグ木の練習問題。<a target="_blank" href="http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=3696196#1">提出コード</a></li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc042/tasks/arc058_b">
    AtCoder ABC042 D - いろはちゃんとマス目</a>：グリッド上での数え上げ。グリッドをグラフで表すと良さげ</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc045/tasks/arc061_b">
    AtCoder ABC045 D - すぬけ君の塗り絵</a>：盤面が大きすぎるときは、マスに注目する</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc046/tasks/arc062_b">
    AtCoder ABC046 D - AtCoDeerくんと変なじゃんけん</a>：(自分のパーの数)-(相手のパーの数)が最大得点</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc047/tasks/arc063_b">
    AtCoder ABC047 D - 高橋君と見えざる手</a>：最小値を保持しながら先に進む</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc049/tasks/arc065_b">
    AtCoder ABC049 D - 連結</a>：UnionFind木を2つ使う。map&lt;pair&lt;...&gt;, int&gt;を用意してペアをカウント</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc050/tasks/arc066_b">
    AtCoder ABC050 D - Xor Sum</a>：$(u, v)$と$(a, b)$を1対1対応させるルールを作って<a target="_blank" href="https://atcoder.jp/contests/abc050/submissions/6109676">桁DP</a></li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc051/tasks/abc051_d">
    AtCoder ABC051 D - Candidates of No Shortest Paths</a>：ワーシャルフロイド</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc052/tasks/arc067_b">
    AtCoder ABC052 D - Walk and Teleport</a>：自明な貪欲</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc053/tasks/arc068_b">
    AtCoder ABC053 D - Card Eater</a>：優先度付きキューを使った貪欲。Editorialはもう少し考察を続けた解法</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc054/tasks/abc054_d">
    AtCoder ABC054 D - Mixing Experiment</a>：dp[i][j] := $A$が$i$グラム、$B$が$j$グラムのときの最小予算</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc055/tasks/arc069_b">
    AtCoder ABC055 D - Menagerie</a>：最初の2つを決めるとすべてが芋づる式に決まる。<code>inc()</code>と<code>dec()</code></li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc056/tasks/arc070_b">
    AtCoder ABC056 D - No Need</a>：「$a_i$が不要なとき、それ以下の$a_j$は不要」を示す。あとは部分和DPと二分探索</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc057/tasks/abc057_d">
    AtCoder ABC057 D - Maximum Average Sets</a>：平均は自明。何通りかは、降順ソート後に$v_1=v_{A}$かどうかで場合分け</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc058/tasks/arc071_b">
    AtCoder ABC058 D - 井井井</a>：数式で表して$\sum$を分解し、2つ並ぶ$\sum$の計算量を落とすために数直線上で考察</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc059/tasks/arc072_b">
    AtCoder ABC059 D - Alice&Brown</a>：Win-Lose Algorithm</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc060/tasks/arc073_b">
    AtCoder ABC060 D - Simple Knapsack</a>：制約を見る。「重さ$w$の品物を$x$個選ぶ」の組み合わせを全探索</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc061/tasks/abc061_d">
    AtCoder ABC061 D - Score Attack</a>：ベルマンフォード。$2N$回ループすることで閉路を検知</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc062/tasks/arc074_b">
    AtCoder ABC062 D - 3N Numbers</a>：境目を全探索。インデックスをインクリメントしながら状態を更新</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc063/tasks/arc075_b">
    AtCoder ABC063 D - Widespread</a>：爆発の回数を二分探索</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc066/tasks/arc077_b">
    AtCoder ABC066 D - 11</a>：重複して数えたものを後から引く</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc067/tasks/arc078_b">
    AtCoder ABC067 D - Fennec VS. Snuke</a>：相手の邪魔をするのが最優先。両方向からBFS</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc068/tasks/arc079_b">
    AtCoder ABC068 D - Decrease (Contestant ver.)</a>：制約を眺めると、長さ$50$の数列が見えてくる</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc069/tasks/arc080_b">
    AtCoder ABC069 D - Grid Coloring</a>：蛇腹模様のようにグリッドを埋めていく</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc070/tasks/abc070_d">
    AtCoder ABC070 D - Transit Tree Path</a>：経由点からの最短距離を予め求めておく。木かつ正の重みなのでDFSでOK</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc071/tasks/arc081_b">
    AtCoder ABC071 D - Coloring Dominoes</a>：考察を重ねて乗算だけで済ますか、数え上げDPをするか</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc072/tasks/arc082_b">
    AtCoder ABC072 D - Derangement</a>：スワップ系。証明して貪欲</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc073/tasks/abc073_d">
    AtCoder ABC073 D - joisino's travel</a>：訪れる町の順序を全探索 + ワーシャルフロイド</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc074/tasks/arc083_b">
    AtCoder ABC074 D - Restoring Road Network</a>：迂回しても最短距離が変わらないような辺を取り除く</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc075/tasks/abc075_d">
    AtCoder ABC075 D - Axis-Parallel Rectangle</a>：長方形の辺上には必ず点がある。全探索。二次元累積和</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/arc084/tasks/arc084_b">
    AtCoder ABC077 D - Small Multiple</a>：正の整数は$1$から始めて$\times 10$と$+1$を繰り返して作れる。<a target="_blank" href="https://atcoder.jp/contests/arc084/submissions/6118857">DP解</a></li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc079/tasks/abc079_d">
    AtCoder ABC079 D - Wall</a>：$i$から$j$に書き換える魔力の最小値をワーシャルフロイドで求める</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc080/tasks/abc080_d">
    AtCoder ABC080 D - Recording</a>：同一チャンネルの連続する範囲をまとめてからimos法</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc081/tasks/arc086_b">
    AtCoder ABC081 D - Non-decreasing</a>：操作は$2N$回行えることに注目。絶対値が最大の要素を使えば、2回の操作でどんな要素でも大小関係を逆転できる</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc082/tasks/arc087_b">
    AtCoder ABC082 D - FT Robot</a>：x方向とy方向を独立に考えると部分和問題の類題に。MLEに注意</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc083/tasks/arc088_b">
    AtCoder ABC083 D - Wide Flip</a>：<code>'0'</code>と<code>'1'</code>が隣り合うとき、片方を書き換える操作が必要</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc084/tasks/abc084_d">
    AtCoder ABC084 D - 2017-like Number</a>：素数判定。$1 \le n \le 10^5$の数をあらかじめ調べておいて累積和</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc085/tasks/abc085_d">
    AtCoder ABC085 D - Katana Thrower</a>：$a_i$と$b_i$は分けて考えられる。順番は無視できる。境界値に注意</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc088/tasks/abc088_d">
    AtCoder ABC088 D - Grid Repainting</a>：最短経路を求める必要はなく、最短距離だけでOK</li>
  
  <li><a target="_blank" href="https://atcoder.jp/contests/abc128/tasks/abc128_e">
    AtCoder ABC128 E - Roadwork</a>：座標圧縮 + 双対セグ木が一番楽</li>
  
  <li><a target="_blank" href="https://atcoder.jp/contests/abc131/tasks/abc131_a">
    AtCoder ABC131 A - Security</a>：文字列内の文字を参照できるか</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc131/tasks/abc131_b">
    AtCoder ABC131 B - Bite Eating</a>：難読</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc131/tasks/abc131_c">
    AtCoder ABC131 C - Anti-Division</a>：割り算の包除原理</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc131/tasks/abc131_d">
    AtCoder ABC131 D - Megalomania</a>：期限の迫っている仕事を先にやるという貪欲</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc131/tasks/abc131_e">
    AtCoder ABC131 E - Friendships</a>：グラフ構築問題は、最初に極端なグラフ（スターや完全グラフ、ライングラフ）を考えると良さげ</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/abc131/tasks/abc131_f">
    AtCoder ABC131 F - Must Be Rectangular!</a>：座標を二部グラフで表現。座標上の点は、二部グラフの辺に対応</li>
  <li><a target="_blank" href="https://atcoder.jp/contests/iroha2019-day1/tasks/iroha2019_day1_i">
    AtCoder いろはちゃんコンテスト Day1 I - リスのお仕事</a>：最短距離が求まっても、seen=trueにしてはいけない</li>

  <li><a target="_blank" href="https://codeforces.com/contest/1185/problem/G1">
    Codeforces #568 (Div. 2) G1. Playlist for Polycarp (easy version)</a>：巡回セールスマン問題を意識すると良さげ</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1180/problem/A">
    Codeforces #569 (Div. 2) A. Alex and a Rhombus</a>：$\sum_{i=1}^n i^2$でOK</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1180/problem/B">
    Codeforces #569 (Div. 2) B. Nick and Array</a>：最初に全要素をマイナスにしておくと楽</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1180/problem/C">
    Codeforces #569 (Div. 2) C. Valeriy and Deque</a>：いずれ一番大きい要素が前に固定される</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1183/problem/A">
    Codeforces #570 (Div. 3) A. Nearest Interesting Number</a>：全探索</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1183/problem/B">
    Codeforces #570 (Div. 3) B. Equalize Prices</a>：最小と最大の差に注目</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1183/problem/C">
    Codeforces #570 (Div. 3) C. Computer Game</a>：不等式を解く</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1183/problem/D">
    Codeforces #570 (Div. 3) D. Candy Box (easy version)</a>：抽象化して優先度付きキュー</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1183/problem/E">
    Codeforces #570 (Div. 3) E. Subsequences (easy version)</a>：hardと同じ解法</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1183/problem/F">
    Codeforces #570 (Div. 3) F. Topforces Strikes Back</a>：「3個」に着目（$k$個ではない）。場合分けして複雑さ軽減</li>
  <li><a target="_blank" href="https://codeforces.com/contest/1183/problem/G">
    Codeforces #570 (Div. 3) G. Candy Box (hard version)</a>：優先度付きキューと少しの工夫</li>

  <li><a target="_blank" href="https://yukicoder.me/problems/no/3">
    yukicoder No.3 ビットすごろく</a>：ダイクストラで解いた。BFSとの違いがよくわかっていないっぽい</li>
  <li><a target="_blank" href="https://yukicoder.me/problems/no/59">
    yukicoder No.59 鉄道の旅</a>：BITを使う。セグ木だと、BITの10倍くらい時間がかかる</li>
  <li><a target="_blank" href="https://yukicoder.me/problems/no/179">
    yukicoder No.179 塗り分け</a>：平行移動の量を全探索</li>
  <li><a target="_blank" href="https://yukicoder.me/problems/no/652">
    yukicoder No.652 E869120 and TimeZone</a>：日付に関する実装は意外と大変</li>
  <li><a target="_blank" href="https://yukicoder.me/problems/no/672">
    yukicoder No.672 最長AB列</a>：$A=1, B=-1$として累積和</li>
</ul>
