#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < int(n); i++)
#define rrep(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define repc(i, n) for (int i = 0; i <= int(n); i++)
#define each(x, y) for (auto &x : y)

using namespace std;

using i32 = int;
using i64 = long long;
using vi32 = vector<i32>;
using vi64 = vector<i64>;

template <typename T, typename S>
struct LazySegmentTree {
  using F = function<T(T, T)>;
  using G = function<T(T, S, int)>;
  using H = function<S(S, S)>;

  vector<T> v;
  vector<S> z;
  F f;
  G g;
  H h;
  T e;
  S d;
  int n;

  LazySegmentTree(int size, F f, G g, H h, T e, S d) : f(f), g(g), h(h), e(e), d(d) {
    n = 1;
    while (n < size) n <<= 1;
    v.resize(n * 2, e);
    z.resize(n * 2, d);
  }
  
  void set(int k, T x) {
    v[k + n] = x;
  }

  void build() {
    rrep(i, n) v[i] = f(v[i * 2 + 0], v[i * 2 + 1]);
  }

  void propagate(int k, int l, int r) {
    v[k] = g(v[k], z[k], r - l);
    if (k < n) {
      z[k * 2 + 0] = h(z[k * 2 + 0], z[k]);
      z[k * 2 + 1] = h(z[k * 2 + 1], z[k]);
    }
    z[k] = d;
  }

  T update(int a, int b, S x, int k = 1, int l = 0, int r = -1) {
    if (r == -1) r = n;
    propagate(k, l, r);
    if (b <= l || r <= a) return v[k];
    if (a <= l && r <= b) { z[k] = x; propagate(k, l, r); return v[k]; }
    return v[k] = f(
      update(a, b, x, k * 2 + 0, l, (l + r) / 2),
      update(a, b, x, k * 2 + 1, (l + r) / 2, r)
    );
  }

  T query(int a, int b, int k = 1, int l = 0, int r = -1) {
    if (r == -1) r = n;
    propagate(k, l, r);
    if (b <= l || r <= a) return e;
    if (a <= l && r <= b) return v[k];
    return f(
      query(a, b, k * 2 + 0, l, (l + r) / 2),
      query(a, b, k * 2 + 1, (l + r) / 2, r)
    );
  }
};

struct TwoMonthScheduling {
  int minimumMonths(int workers, vi32 fm0, vi32 fm1, vi32 sm0, vi32 sm1) {
    int L0 = fm0.size(), L1 = fm1.size();
    vi32 fm(L0 * L1), sm(L0 * L1);
    rep(i1, L1) rep(i0, L0) {
      fm[i1 * L0 + i0] = min(workers, fm0[i0] ^ fm1[i1]);
      sm[i1 * L0 + i0] = min(workers, sm0[i0] ^ sm1[i1]);
    }
    int n = L0 * L1;

    vector<vi32> lst(2, vi32(n));
    rep(i, n) lst[0][i] = fm[i];
    rep(i, n) lst[1][i] = sm[i];

    vector<vi64> sums(2, vi64(n + 1));
    rep(i, 2) rep(j, n) sums[i][j + 1] += sums[i][j] + lst[i][j];

    vector<LazySegmentTree<int, int>> segs;
    repc(i, n) segs.push_back(LazySegmentTree<int, int>(
      n + 1,
      [](int a, int b) { return min(a, b); },
      [](int a, int b, int x) { return x >= 0 ? min(a, b) : -1e9; },
      [](int a, int b) { return min(a, b); },
      (int) 1e9, (int) 1e9)
    );

    segs[0].update(0, 1, 0);

    repc(i, n) repc(j, i) {
      i64 rest = (i64) workers - (sums[1][i] - sums[1][j]);
      if (rest < 0) continue;
      auto check = [&](int l, int r) {
        if (sums[0][r] - sums[0][l] > rest) return false;
        if (sums[1][r] - sums[1][l] > workers) return false;
        return true;
      };
      int ok = i, ng = n + 1;
      while (abs(ok - ng) > 1) {
        int md = (ok + ng) / 2;
        (check(i, md) ? ok : ng) = md;
      }
      segs[i].update(i, ok + 1, segs[j].query(i, i + 1) + 1);
    }

    return segs[n].query(n, n + 1);
  }
};
