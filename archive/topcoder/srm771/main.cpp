#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < int(n); i++)
#define repc(i, n) for (int i = 0; i <= int(n); i++)
#define each(x, y) for (auto &x : y)
#define bit(b) (1ll << (b))

using namespace std;

using i64 = long long;
using vi64 = vector<i64>;

void solve(); int main() { ios::sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(16); solve(); return 0; }
template <typename T> inline T power(T x, i64 n, T e = 1) { T r = e; while (n > 0) { if (n & 1) r *= x; x *= x; n >>= 1; } return r; }
template <typename T> istream& operator>>(istream &is, vector<T> &v) { each(x, v) is >> x; return is; }

i64 dp[20][2][2][bit(10)];

i64 cont(i64 n) {
  rep(i, 20) rep(j, 2) rep(k, 2) rep(l, bit(10)) {
    dp[i][j][k][l] = 0;
  }
  dp[0][0][0][0] = 1;
  rep(i, 18) {
    int x = (n / power(10ll, 18 - i - 1)) % 10;
    rep(j, 2) rep(k, 2) rep(l, bit(10)) {
      if (j == 0) {
        repc(m, x) {
          if (m == x) {
            if (k || m) {
              dp[i + 1][0][1][l ^ (1 << m)] += dp[i][j][k][l];
            } else {
              dp[i + 1][0][0][l] += dp[i][j][k][l];
            }
          } else {
            if (k || m) {
              dp[i + 1][1][1][l ^ (1 << m)] += dp[i][j][k][l];
            } else {
              dp[i + 1][1][0][l] += dp[i][j][k][l];
            }
          }
        }
      } else {
        repc(m, 9) {
          if (k || m) {
            dp[i + 1][1][1][l ^ (1 << m)] += dp[i][j][k][l];
          } else {
            dp[i + 1][1][0][l] += dp[i][j][k][l];
          }
        }
      }
    }
  }
  return dp[18][0][1][0] + dp[18][1][1][0];
}

struct AllEven {
  i64 countInRange(i64 lo, i64 hi) {
    i64 l = cont(max(0ll, lo - 1));
    i64 h = cont(hi);
    return h - l;
  }
};

void solve() {
  i64 lo, hi;
  cin >> lo >> hi;
  cout << AllEven().countInRange(lo, hi) << endl;
}
