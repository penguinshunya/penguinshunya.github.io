template<int mod>
struct ModInt {
  int x;
  ModInt(): x(0) {}
  ModInt(int a) { x = a % mod; if (x < 0) x += mod; }
  ModInt &operator+=(ModInt that) { x = (x + that.x) % mod; return *this; }
  ModInt &operator-=(ModInt that) { x = (x + mod - that.x) % mod; return *this; }
  ModInt &operator*=(ModInt that) { x = (i64) x * that.x % mod; return *this; }
  ModInt &operator/=(ModInt that) { return *this *= that.inverse(); }
  ModInt operator-() { return ModInt(-this->x); }
  friend ostream& operator<<(ostream &os, ModInt m) { return os << m.x; }
  ModInt inverse() {
    int a = x, b = mod, u = 1, v = 0;
    while (b) { int t = a / b; a -= t * b; u -= t * v; swap(a, b); swap(u, v); }
    return ModInt(u);
  }
  #define op(o, p) ModInt operator o(ModInt that) { return ModInt(*this) p that; }
    op(+, +=) op(-, -=) op(*, *=) op(/, /=)
  #undef op
  #define op(o) bool operator o(ModInt that) const { return x o that.x; }
    op(==) op(!=) op(<) op(<=) op(>) op(>=)
  #undef op
};

using mint = ModInt<1000000007>;
