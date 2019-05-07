struct UnionFind {
  vi32 par;
  UnionFind(int n) {
    par = vi32(n + 1);
    iota(all(par), 0);
  }
  int root(int x) {
    if (par[x] == x) return x;
    return par[x] = root(par[x]);
  }
  void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return;
    par[x] = y;
  }
  bool same(int x, int y) {
    return root(x) == root(y);
  }
};
