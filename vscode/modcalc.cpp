template<typename T>
struct ModCalc {
  vector<T> fac, finv;
  ModCalc(int max) {
    fac = vector<T>(max + 1);
    finv = vector<T>(max + 1);
    fac[0] = 1;
    reps(i, max) fac[i] = fac[i - 1] * i;
    finv[max] = (T) 1 / fac[max];
    rreps(i, max) finv[i - 1] = finv[i] * i;
  }
  T com(int a, int b) {
    if (a < 0) return 0;
    if (b < 0 || b > a) return 0;
    return fac[a] * finv[a - b] * finv[b];
  }
};

using mcalc = ModCalc<mint>;
