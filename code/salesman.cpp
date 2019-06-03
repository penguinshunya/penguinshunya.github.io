#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < int(n); i++)
#define rrep(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define reps(i, n) for (int i = 1; i <= int(n); i++)
#define rreps(i, n) for (int i = int(n); i >= 1; i--)
#define repc(i, n) for (int i = 0; i <= int(n); i++)
#define rrepc(i, n) for (int i = int(n); i >= 0; i--)
#define repi(i, a, b) for (int i = int(a); i < int(b); i++)
#define repic(i, a, b) for (int i = int(a); i <= int(b); i++)
#define each(x, y) for (auto &x : y)
#define all(a) (a).begin(), (a).end()
#define bit(b) (1ll << (b))
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define rsort(v) sort(all(v)); reverse(all(v))

using namespace std;

using i32 = int;
using i64 = long long;
using f80 = long double;
using vi32 = vector<i32>;
using vi64 = vector<i64>;
using vf80 = vector<f80>;
using vstr = vector<string>;

inline void yes() { cout << "Yes" << '\n'; exit(0); }
inline void no() { cout << "No" << '\n'; exit(0); }
inline i64 gcd(i64 a, i64 b) { if (min(a, b) == 0) return max(a, b); if (a % b == 0) return b; return gcd(b, a % b); }
inline i64 lcm(i64 a, i64 b) { return a / gcd(a, b) * b; }
void solve(); int main() { ios::sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(16); solve(); return 0; }
template<typename T> class pqasc : public priority_queue<T, vector<T>, greater<T>> {};
template<typename T> class pqdesc : public priority_queue<T, vector<T>, less<T>> {};
template<typename T> inline void amax(T &x, T y) { if (x < y) x = y; }
template<typename T> inline void amin(T &x, T y) { if (x > y) x = y; }
template<typename T> inline T power(T x, i64 n) { T r = 1; while (n > 0) { if (n & 1) r *= x; x *= x; n >>= 1; } return r; }
template<typename T> istream& operator>>(istream &is, vector<T> &v) { for (auto &x : v) is >> x; return is; }
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { rep(i, v.size()) { if (i) os << ' '; os << v[i]; } return os; }

using P = pair<int, int>;
vector<P> edges[20];
int dp[20][bit(20)];

void solve() {
  int n, m; cin >> n >> m;
  rep(i, m) {
    int u, v, c; cin >> u >> v >> c;
    edges[u].push_back({v, c});
  }

  // 再帰+メモ化ver
  rep(i, 20) rep(j, bit(20)) dp[i][j] = -1;
  function<int(int, int)> rec = [&](int u, int S) {
    if (dp[u][S] != -1) return dp[u][S];
    if (u == 0 && S == (bit(n) - 1)) return dp[u][S] = 0;
    int ret = 1e9;
    each(e, edges[u]) {
      int v, c;
      tie(v, c) = e;
      if (S & bit(v)) continue;
      amin(ret, rec(v, S | bit(v)) + c);
    }
    return dp[u][S] = ret;
  };
  cout << rec(0, 0) << '\n';

  // ループver
  rep(i, 20) rep(j, bit(20)) dp[i][j] = 1e9;
  dp[0][bit(n) - 1] = 0;
  rrep(S, bit(n) - 1) rep(u, n) {
    if (S & bit(u)) continue;
    // u: 今いる頂点
    // v: 次に進む頂点
    each(e, edges[u]) {
      int v, c;
      tie(v, c) = e;
      amin(dp[u][S], dp[v][S | bit(u)] + c);
    }
  }
  cout << dp[0][0] << '\n';
}
