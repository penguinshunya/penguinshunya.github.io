---
layout: default
title: しゃくとり法 - ぺんぎんノート
---
しゃくとり法を使う問題は、2種類に分けられます。
<ol>
  <li>範囲を広げていくと、いつか条件を満たさなくなる</li>
  <li>範囲を広げていくと、いつか条件を満たす</li>
</ol>
<p>たとえば、1.の問題には「ある数列の連続する部分列の和が$K$以下となるもののうち、最長の長さはいくつか」などがあり、2.の問題には「ある数列の連続する部分列の和が$K$以上となるもののうち、最も短い部分列の長さはいくつか」などがあります。</p>
<p>以下のテンプレートは、1.の問題に使えるものです。</p>

```cpp
T acc = e;  // 蓄積値。eは単位元のようなもの
for (int l = 0, r = 0; l < N; ) {
  while (r < N && /* accを更新しても条件を満たすか */) {
    /* accを更新してからr++ */
  }

  /* 区間[l, r)が条件を満たす範囲 */

  /* accを更新してからl++ */

  // この行は思考停止しながら書く
  if (l >= r) r = l, acc = e;
}
```

<p>実装の方針としては、半開区間で実装しています。たとえば、上のテンプレートの7行目では、`acc`は区間$[l, r)$の値を保持しています。条件を満たす部分列の長さは$r-l$で取得できます。</p>
<p>続けて2.のテンプレートも載せます。</p>

```cpp
T acc = e;  // 蓄積値。eは単位元のようなもの
for (int l = 0, r = 0; l < N; ) {
  while (r < N && /* accを更新しても条件を満たさないか */) {
    /* accを更新してからr++ */
  }
  /* 条件を満たさない状態で最後までたどり着いた */
  if (r == N) break;

  /* 区間[l, r + 1)が条件を満たす範囲 */

  /* accを更新してからl++ */

  // この行は思考停止しながら書く
  if (l >= r) r = l, acc = e;
}
```

<p>1.のテンプレートに`if (r == N) break;`が加わっただけです。あとは1.と同じ感覚で実装できます。ただ、ひとつ気をつけなければいけない点があり、9行目の`acc`は「ぎりぎり条件を満たさない値」を持っているという点です。ということで、条件を満たす値を作るために、`acc`と`r`を使う必要があります。</p>

## 実際に出題された問題と、その実装

<style>
th, td { padding: 0.3em 0.5em; }
td { vertical-align: top; }
</style>
<table border="1" style="border-collapse: collapse;">
  <tr style="text-align: left;"><th>問題</th><th>実装</th></tr>
  <tr>
    <td><a target="_blank" href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_C&lang=jp">AOJ Course The Number of Windows</a></td>
    <td><a target="_blank" href="http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=3612455#1">ソースコードへのリンク</a>。`acc`は整数型、`e`は$0$とします。</td>
  </tr>
  <tr>
    <td><a target="_blank" href="http://poj.org/problem?id=3061">POJ 3061 Subsequence</a></td><td>POJでは実装を公開できないので、ページ下に掲載します。</td>
  </tr>
  <tr>
    <td><a target="_blank" href="https://atcoder.jp/contests/abc032/tasks/abc032_c">AtCoder ABC032 C - 列</a></td>
    <td><a target="_blank" href="https://atcoder.jp/contests/abc032/submissions/5704111">ソースコードへのリンク</a>。`acc`は整数型、`e`は$1$とします。</td>
  </tr>
  <tr>
    <td><a target="_blank" href="https://atcoder.jp/contests/abc038/tasks/abc038_c">AtCoder ABC038 C - 単調増加</a></td>
    <td><a target="_blank" href="https://atcoder.jp/contests/abc038/submissions/5704052">ソースコードへのリンク</a>。`acc`は直前の数字、`e`は$0$とします。</td>
  </tr>
  <tr>
    <td><a target="_blank" href="https://atcoder.jp/contests/arc022/tasks/arc022_2">AtCoder ARC022 B - 細長いお菓子</a></td>
    <td><a target="_blank" href="https://atcoder.jp/contests/arc022/submissions/5705708">ソースコードへのリンク</a>。`acc`は`set`、`e`は`{}`とします。</td>
  </tr>
  <tr>
    <td><a target="_blank" href="https://atcoder.jp/contests/abc098/tasks/arc098_b">AtCoder ABC098 D - Xor Sum 2</a></td>
    <td><a target="_blank" href="https://atcoder.jp/contests/abc098/submissions/5707106">ソースコードへのリンク</a>。`acc`が複数あるパターンです。</td>
  </tr>
</table>
<p><a target="_blank" href="http://poj.org/problem?id=3061">POJ 3061 Subsequence</a>以外の問題はすべて、1.のテンプレートに当てはめることができます。</p>

```cpp
#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

typedef long long i64;
typedef vector<i64> vi64;

int main() {
  int Q; cin >> Q;
  rep(i, Q) {
    int N, S; cin >> N >> S;
    vi64 a(N); rep(i, N) cin >> a[i];
    int ans = N + 1;
    i64 sum = 0;
    for (int l = 0, r = 0; l < N; ) {
      while (r < N && sum + a[r] < S) {
        sum += a[r++];
      }
      if (r == N) break;
      ans = min(ans, r - l + 1);
      sum -= a[l++];
      if (l >= r) r = l, sum = 0;
    }
    if (ans == N + 1) cout << 0 << '\n';
    else cout << ans << '\n';
  }
  return 0;
}
```

<p>こちらが<a target="_blank" href="http://poj.org/problem?id=3061">POJ 3061 Subsequence</a>の実装です。`acc`は整数型、`e`は$0$です。2.の問題なので、`if (r == N) break;`という行があります。条件を満たす数列の長さは$r - l + 1$です。$r - l$でない理由は、$r - l$は「ぎりぎり条件を満たさない数列の長さ」だからです。$1$を足すことで、条件を満たす数列の長さになります。</p>

## まとめ

<ul>
  <li>範囲が広がるほど条件を満たしにくくなる → 1.のテンプレート</li>
  <li>範囲が広がるほど条件を満たしやすくなる → 2.のテンプレート</li>
</ul>

## 参考

<a target="_blank" href="https://qiita.com/drken/items/ecd1a472d3a0e7db8dce">しゃくとり法 (尺取り法) の解説と、それを用いる問題のまとめ</a>
