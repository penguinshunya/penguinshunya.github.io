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

using namespace std;

using i32 = int;
using i64 = long long;
using u64 = unsigned long long;
using f80 = long double;
using vi32 = vector<i32>;
using vi64 = vector<i64>;
using vu64 = vector<u64>;
using vf80 = vector<f80>;
using vstr = vector<string>;

inline void yes() { cout << "Yes" << '\n'; exit(0); }
inline void no() { cout << "No" << '\n'; exit(0); }
inline i64 gcd(i64 a, i64 b) { if (min(a, b) == 0) return max(a, b); if (a % b == 0) return b; return gcd(b, a % b); }
inline i64 lcm(i64 a, i64 b) { return a / gcd(a, b) * b; }
inline u64 xorshift() { static u64 x = 88172645463325252ull; x = x ^ (x << 7); return x = x ^ (x >> 9); }
void solve(); int main() { ios::sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(16); solve(); return 0; }
template <typename T> class pqasc : public priority_queue<T, vector<T>, greater<T>> {};
template <typename T> class pqdesc : public priority_queue<T, vector<T>, less<T>> {};
template <typename T> inline void amax(T &x, T y) { if (x < y) x = y; }
template <typename T> inline void amin(T &x, T y) { if (x > y) x = y; }
template <typename T> inline T exp(T x, i64 n, T e = 1) { T r = e; while (n > 0) { if (n & 1) r *= x; x *= x; n >>= 1; } return r; }
template <typename T> istream& operator>>(istream &is, vector<T> &v) { each(x, v) is >> x; return is; }
template <typename T> ostream& operator<<(ostream &os, vector<T> &v) { rep(i, v.size()) { if (i) os << ' '; os << v[i]; } return os; }
template <typename T, typename S> istream& operator>>(istream &is, pair<T, S> &p) { is >> p.first >> p.second; return is; }
template <typename T, typename S> ostream& operator<<(ostream &os, pair<T, S> &p) { os << p.first << ' ' << p.second; return os; }

template <int mod>
struct ModInt {
  int x;
  ModInt(): x(0) {}
  ModInt(long long a) { x = a % mod; if (x < 0) x += mod; }
  ModInt &operator+=(ModInt that) { x = (x + that.x) % mod; return *this; }
  ModInt &operator-=(ModInt that) { x = (x + mod - that.x) % mod; return *this; }
  ModInt &operator*=(ModInt that) { x = (long long) x * that.x % mod; return *this; }
  ModInt &operator/=(ModInt that) { return *this *= that.inverse(); }
  ModInt inverse() {
    int a = x, b = mod, u = 1, v = 0;
    while (b) { int t = a / b; a -= t * b; u -= t * v; swap(a, b); swap(u, v); }
    return ModInt(u);
  }
  #define op(o, p) ModInt operator o(ModInt that) { return ModInt(*this) p that; }
    op(+, +=) op(-, -=) op(*, *=) op(/, /=)
  #undef op
  friend ostream& operator<<(ostream &os, ModInt m) { return os << m.x; }
};

using mint = ModInt<1000000007>;

mint dp[2][601][41];

struct HockeyPlayoff {
  int winProbability(int winsNeeded, int AwinHome, int BwinHome) {
    mint inv = ((mint) 100).inverse();

    dp[0][0][0] = 1;
    int m = 2 * winsNeeded - 1;
    rep(i, m) {
      int p = i % 2;
      int n = (p + 1) % 2;
      rep(j, winsNeeded) repc(k, 20) rep(l, 2) {
        dp[n][j][k + l * 20] = 0;
      }
      rep(j, winsNeeded) repc(k, 20) rep(l, 2) {
        mint prev = dp[p][j][k + l * 20];
        if ((i / 2) % 2 == 0) {
          if (l == 0) {
            dp[n][j + 1][min(k + 1, 20)] += prev * min(100, AwinHome + k * 5) * inv;
            dp[n][j][21] += prev * max(0, (100 - AwinHome) - k * 5) * inv;
          } else {
            dp[n][j + 1][1] += prev * max(0, AwinHome - k * 5) * inv;
            dp[n][j][20 + min(k + 1, 20)] += prev * min(100, (100 - AwinHome) + k * 5) * inv;
          }
        } else {
          if (l == 0) {
            dp[n][j + 1][min(k + 1, 20)] += prev * min(100, (100 - BwinHome) + k * 5) * inv;
            dp[n][j][21] += prev * max(0, BwinHome - k * 5) * inv;
          } else {
            dp[n][j + 1][1] += prev * max(0, (100 - BwinHome) - k * 5) * inv;
            dp[n][j][20 + min(k + 1, 20)] += prev * min(100, BwinHome + k * 5) * inv;
          }
        }
      }
    }
    mint ans = 0;
    rep(i, 2) repc(k, 40) {
      ans += dp[i][winsNeeded][k];
    }
    ans *= exp((mint) 100, m);
    return ans.x;
  }
};

void solve() {
  int winsNeeded, AwinHome, BwinHome;
  cin >> winsNeeded >> AwinHome >> BwinHome;
  cout << HockeyPlayoff().winProbability(winsNeeded, AwinHome, BwinHome) << endl;
}
