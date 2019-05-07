inline bool is_prime(i32 n) {
  if (n < 2) {
    return 0;
  }
  for (i32 i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

vi32 prime_list(i32 n) {
  vi32 primes;
  vector<bool> f(n, true);
  f[0] = f[1] = false;
  repi(i, 2, n) {
    if (!f[i]) continue;
    primes.push_back(i);
    for (int j = i * 2; j < n; j += i) {
      f[j] = false;
    }
  }
  return primes;
}
