解説の愚直DPの実装

```cpp
#include <bits/stdc++.h>

using namespace std;

int dp[310][310]; // i人目の合計点数がjのときの最小の訂正回数

int main() {
  int N;
  cin >> N;
  using T = tuple<int, int, int>;
  vector<T> A;
  for (int i = 0; i < N; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    A.emplace_back(x, y, z);
  }
  for (int i = 0; i < N; i++) {
    // 累積minを取る
    vector<int> mins(302, 1e9);
    for (int j = 300; j >= 0; j--) {
      mins[j] = min(mins[j + 1], dp[i][j]);
    }
    int x, y, z;
    tie(x, y, z) = A[i];
    if (x > y) swap(x, y);
    if (y > z) swap(y, z);
    if (x > y) swap(x, y);
    for (int j = 0; j <= 300; j++) {
      int c;
      if (j < x) c = 3;
      else if (j < x + y) c = 2;
      else if (j < x + y + z) c = 1;
      else if (j == x + y + z) c = 0;
      else if (j <= y + z + 100) c = 1;
      else if (j <= z + 200) c = 2;
      else c = 3;
      dp[i + 1][j] = mins[j] + c;
    }
  }
  int ans = 1e9;
  for (int i = 0; i <= 300; i++) {
    ans = min(ans, dp[N][i]);
  }
  cout << ans << endl;
  return 0;
}
```

以下の入力を与えたときに3が出力されればAC

```
5
100 31 49
97 37 49
100 37 49
100 37 49
100 17 100
```
