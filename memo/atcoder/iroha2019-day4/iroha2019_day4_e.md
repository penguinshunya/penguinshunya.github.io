---
layout: problem
site: AtCoder
prefix: いろはちゃんコンテスト Day4 E
problem_name: 芽生え
level: 700点
problem_url: https://atcoder.jp/contests/iroha2019-day4/tasks/iroha2019_day4_e
---
このゲームはNimそのものであるため、次の問題に言い換えられます。  
<div class="block">
  $A_1 \oplus A_2 \oplus \ldots \oplus A_N = 0$を満たさない数列$A_1, A_2, \ldots A_N$は何通りあるでしょうか。答えは非常に大きくなる可能性があるため、$10^9 + 7$で割った余りを答えてください。
</div>
補集合である「$A_1 \oplus A_2 \oplus \ldots \oplus A_N = 0$を満たす数列」を数えることを考えます。  
ここで非負整数$x$の$i$ビット目を$f(x, i)$とすると、$A_1 \oplus A_2 \oplus \ldots \oplus A_N = 0$という条件は、次のように言い換えられます。  
<div class="block">すべての正整数$j$について、$\sum_{i=1}^{N} f(A_i, j)$は偶数</div>
つまり、$A_i$の2進数表記での各桁に注目し、1が偶数個になるような数列$A$が何通りあるかを求めればよいです。そこで次のDPを考えます。  
<div class="block">$dp[i][j]$ := (上位から$i$ビット目までを見たときに、$K$未満と確定した要素の数が$j$個のときの$A$の通り数)</div>
たとえば以下の表は、$N = 8$、$K = 54$（二進数表記で$110110$）のときの、$dp[3][5]$という状態を表しています。  
<div class="wrapping">
<table id="table" border="1">
  <tr>
    <th>$K$</th><th>$A_1$</th><th>$A_2$</th><th>$A_3$</th><th>$A_4$</th><th>$A_5$</th><th>$A_6$</th><th>$A_7$</th><th>$A_8$</th>
  </tr>
  <tr>
    <td>1</td><td>1</td><td>0</td><td class="same">1</td><td>1</td><td class="same">1</td><td>0</td><td>1</td><td class="same">1</td>
  </tr>
  <tr>
    <td>1</td><td>0</td><td>1</td><td class="same">1</td><td>0</td><td class="same">1</td><td>0</td><td>0</td><td class="same">1</td>
  </tr>
  <tr>
    <td>0</td><td>1</td><td>1</td><td class="same">0</td><td>0</td><td class="same">0</td><td>1</td><td>1</td><td class="same">0</td>
  </tr>
  <tr>
    <td>1</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td>
  </tr>
  <tr>
    <td>1</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td>
  </tr>
  <tr>
    <td>0</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td><td>-</td>
  </tr>
</table>
</div>
$dp[i][j]$が既に求まっているものとして遷移を考えます。ここで、$K$の2進数表記での桁数を$D$とおくことにします。  

### 1. $f(K, D - i) = 0$のとき

$N - j$個の要素については、$K$を超えてはいけないので$0$を選ぶ必要があり、$1$通りです。残りの$j$個の要素については、$0$と$1$のどちらを選択することも可能ですが、$1$の個数は偶数でなければならないため$2^{j-1}$通りです（ただし、$j=0$のときは$1$通りです）。ということで遷移は以下です。  

$$
\begin{alignat*}{1}
\left\{
\begin{array}{ll}
dp[i + 1][j] \mathrel{+}= dp[i][j] \times 2^{j-1} &(j \ge 1)\\
dp[i + 1][j] \mathrel{+}= dp[i][j] &(j = 0)
\end{array}
\right.
\end{alignat*}
$$

### 2. $f(K, D - i) = 1$のとき
$j$個の要素については、$N - j$が奇数の場合は奇数個の$1$を、偶数の場合は偶数個の$1$を選ぶことになり、どちらも$2^{j-1}$通りです。  
$N-j$個の要素については、$0$と$1$のどちらを選択することも可能です。$0$を選択する個数を$k$としたとき、$K$未満に確定する要素が$k$個増えるため、遷移先は$dp[i + 1][j + k]$になります。$N-j$個から$k$個の$0$を選ぶ方法は$_{N-j}C_k$通りあるため、最終的には次のような遷移になります。  
$$dp[i + 1][j + k] \mathrel{+}= dp[i][j] \times 2^{j-1} \times _{N-j}C_k$$
ここで一つ注意すべき点があり、$j = 0$かつ$N-k$が奇数のときは、$\sum_{l=1}^{N} f(A_l, D - i)$が必ず奇数となるため0通りです。  

$$
\begin{alignat*}{1}
\left\{
\begin{array}{ll}
dp[i + 1][j + k] \mathrel{+}= 0 &(j = 0 \land (N - k) \bmod 2 = 1)\\
dp[i + 1][j + k] \mathrel{+}= dp[i][j] \times _{N-j}C_k &(j = 0 \land (N - k) \bmod 2 = 0)\\
dp[i + 1][j + k] \mathrel{+}= dp[i][j] \times _{N-j}C_k \times 2^{j-1} &(otherwise)
\end{array}
\right.
\end{alignat*}
$$

$dp[0][0] = 1$、$dp[i][j] = 0 (i \neq 0 \lor j \neq 0)$を初期値としてDPを行ったあと、$\sum_{i = 0}^{N} dp[D][i]$が答えになります。事前に$0 \le n, r \le N$の範囲の$2^n$と$_nC_r$を計算しておくことで、各遷移の計算量が$O(1)$となり、全体で$O(N^2\log K)$の計算量となるため間に合います。  

## 提出コード

`ModInt`の定義は省略しています。<a target="_blank" href="https://atcoder.jp/contests/iroha2019-day4/submissions/5440144">実際に提出したコード</a>

```cpp
#include <bits/stdc++.h>

using namespace std;
using mint = ModInt<1000000007>;

mint dp[80][2020];

int main() {
  int N;
  long long K;
  cin >> N >> K;
  int D = 0;
  {
    long long k = K;
    while (k) D++, k >>= 1;
  }
  vector<mint> pow2(N + 1);
  {
    pow2[0] = 1;
    for (int i = 0; i < N; i++) {
      pow2[i + 1] = pow2[i] * 2;
    }
  }
  vector<vector<mint>> comb(N + 1, vector<mint>(N + 1));
  {
    for (int i = 0; i <= N; i++) {
      comb[i][0] = 1;
      for (int j = 0; j < i; j++) {
        comb[i][j + 1] = comb[i][j] * (i - j) / (j + 1);
      }
    }
  }
  dp[0][0] = 1;
  for (int i = 0; i < D; i++) {
    bool bit = (K >> (D - i - 1)) & 1;
    for (int j = 0; j <= N; j++) {
      if (!bit) {
        if (j == 0) {
          dp[i + 1][j] += dp[i][j];
        } else {
          dp[i + 1][j] += dp[i][j] * pow2[j - 1];
        }
        continue;
      }
      for (int k = 0; k <= N - j; k++) {
        if (j == 0 && (N - k) % 2 == 1) {
          continue;
        }
        if (j == 0) {
          dp[i + 1][j + k] += dp[i][j] * comb[N - j][k];
        } else {
          dp[i + 1][j + k] += dp[i][j] * comb[N - j][k] * pow2[j - 1];
        }
      }
    }
  }
  mint ans = 1;
  for (int i = 0; i < N; i++) {
    ans *= ((K + 1) % 1000000007);
  }
  for (int i = 0; i <= N; i++) {
    ans -= dp[D][i];
  }
  cout << ans << endl;
  return 0;
}
```
