---
layout: problem
site: AtCoder
prefix: CODE FESTIVAL 2016 qual C C
problem_name: 二人のアルピニスト / Two Alpinists
level: 400点
problem_url: https://atcoder.jp/contests/code-festival-2016-qualc/tasks/codefestival_2016_qualC_c
---

## 考察

まずは高橋君だけの場合を考えます。  
山$i$の高さを$h_i$とおきます。定義より、$i = 1$のときは$h_i = T_i$です。それ以外の場合、ひとつ前の地点の最大値と今の地点の最大値を比べ、異なれば高さは$T_i$となり、同じであれば高さは$T_i$以下となります。この文章を数学的に表現すると、次のようになります。  
<div class="block">命題$P(i) := (i = 1) \lor (T_i \gt T_{i-1})$において、真ならば$h_i = T_i$、偽ならば$h_i \le T_i$である。</div>
同様に、青木君だけの場合を考えると、次のようになります。  
<div class="block">命題$Q(i) := (i = N) \lor (A_i \gt A_{i+1})$において、真ならば$h_i = A_i$、偽ならば$h_i \le A_i$である。</div>
独立した2つの命題を合わせて、真偽値表を作ります。  
<style>
th, td {
  padding: 0.2em 1em;
}
</style>
<table border="1" style="border-collapse:collapse;">
  <tr><th></th><th>$P(i)$</th><th>$\lnot P(i)$</th></tr>
  <tr><th>$Q(i)$</th><td>$(h_i = T_i) \land (h_i = A_i)$</td><td>$(h_i \le T_i) \land (h_i = A_i)$</td></tr>
  <tr><th>$\lnot Q(i)$</th><td>$(h_i = T_i) \land (h_i \le A_i)$</td><td>$(h_i \le T_i) \land (h_i \le A_i)$</td></tr>
</table>
この問題は、上の表を満たす$h_1, h_2, \ldots, h_N$が何通りあるかを求める問題と同じです。ということで、各命題について見ていきます。  
<h3>(1) $P(i) \land Q(i)$が真のとき</h3>
$T_i = A_i$のとき、$h_i = T_i$とすることで条件を満たします。$h_i$の取る値はこれ以外に存在しないため、1通りです。<br>$T_i \not= A_i$のとき、条件を満たす$h_i$は存在しないため、0通りです。  
<h3>(2) $\lnot P(i) \land Q(i)$が真のとき</h3>
$T_i \ge A_i$のとき、$h_i = A_i$とすることで条件を満たすため、1通りです。<br>
$T_i \lt A_i$のとき、条件を満たす$h_i$は存在しないため、0通りです。  
<h3>(3) $P(i) \land \lnot Q(i)$が真のとき</h3>
$T_i \le A_i$のとき、$h_i = T_i$とすることで条件を満たすため、1通りです。<br>
$T_i \gt A_i$のとき、条件を満たす$h_i$は存在しないため、0通りです。  
<h3>(4) $\lnot P(i) \land \lnot Q(i)$が真のとき</h3>
各山の高さは正の整数であることを考慮すると、$h_i$の取りうる値の範囲は$1 \le h_i \le \min(T_i, A_i)$だとわかります。したがって、$\min(T_i, A_i)$通りです。  
このようにして各$i$について通り数を求め、すべてを掛け合わせたものが答えです。  

## 実装

<a target="_blank" href="https://atcoder.jp/contests/code-festival-2016-qualc/submissions/5716558">ソースコードはこちらです</a>。考察がそのまま実装に反映されていることがわかります。  

## 感想

数学の力を借りることで考察が捗る問題でした。もし数学の力を借りずに解こうとすると、WAが取れずに困る可能性が高いと思います。僕の場合、最初は感覚で解こうとしてWAを出しました。その後の修正も感覚による修正でACを出しました（反省すべき点です）。  
数学の力を借りることに対して億劫になりがちですが、きちんと問題を解こうとすると避けられないので、これからは、時間がかかってもいいので数学を使ってきちんと考察していこうと思います。  
