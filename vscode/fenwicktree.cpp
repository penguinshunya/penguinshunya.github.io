struct FenwickTree {
  vi64 v;
  FenwickTree(i32 n) {
    v = vi64(n);
  }
  void add(i32 i, i64 x) {
    for (i++; i <= v.size(); i += i & -i) {
      v[i - 1] += x;
    }
  }
  i64 sum(i32 i) {
    i64 r = 0;
    for (; i >= 1; i -= i & -i) {
      r += v[i - 1];
    }
    return r;
  }
};
