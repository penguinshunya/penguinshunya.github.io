template<typename Ord> i64 crossing(vector<Ord> v) {
  auto copy = v;
  sort(all(copy));
  uniq(v);
  map<Ord, i32> mp;
  rep(i, copy.size()) mp[copy[i]] = i;
  rep(i, v.size()) v[i] = mp[v[i]];
  FenwickTree ft(v.size());
  i64 ret = 0;
  rep(i, v.size()) {
    ret += i - ft.sum(v[i] + 1);
    ft.add(v[i], 1);
  }
  return ret;
}
