template<class T>
struct Flow {
  struct Edge {
    int to;
    T cap;
    int rev;
  };

  int n, s, t;
  vector<vector<Edge>> g;
  vector<bool> used;

  Flow(int n, int s, int t) : n(n), s(s), t(t) {
    g = vector<vector<Edge>>(n);
  }

  void add(int from, int to, T cap) {
    g[from].push_back({ to, cap, (int) g[to].size() });
    g[to].push_back({ from, 0, (int) g[from].size() - 1 });
  }

  T dfs(int v, T f) {
    if (v == t) {
      return f;
    }
    used[v] = true;
    for (auto &e : g[v]) {
      if (used[e.to] || e.cap <= 0) {
        continue;
      }
      T d = dfs(e.to, min(f, e.cap));
      if (d > 0) {
        e.cap -= d;
        g[e.to][e.rev].cap += d;
        return d;
      }
    }
    return 0;
  }

  T max_flow() {
    T sum = 0;
    while (true) {
      used = vector<bool>(n);
      T f = dfs(s, numeric_limits<T>::max());
      if (f == 0) {
        break;
      }
      sum += f;
    }
    return sum;
  }
};
