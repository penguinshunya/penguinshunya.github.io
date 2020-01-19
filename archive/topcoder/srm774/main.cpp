#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < int(n); i++)
#define reps(i, n) for (int i = 1; i <= int(n); i++)
using namespace std;

const int mod = 1000000007;

vector<int> loo, hii;
int dp[752][51][51][51];

int rec(int i, int j, int k, int l) {
  if (j == 0 && k == 0 && l == 0)
    return 1;
  if (dp[i][j][k][l] != -1)
    return dp[i][j][k][l];
  int ret = 0;
  i--;
  if (loo[0] <= i && j > 0) ret += rec(min(i, hii[0]), j - 1, k, l), ret %= mod;
  if (loo[1] <= i && k > 0) ret += rec(min(i, hii[1]), j, k - 1, l), ret %= mod;
  if (loo[2] <= i && l > 0) ret += rec(min(i, hii[2]), j, k, l - 1), ret %= mod;
  i++;
  return dp[i][j][k][l] = ret;
};

struct ClassRankings {
  int countWays(vector<int> amt, vector<int> lo, vector<int> hi) {
    {
      map<int, int> ma;
      rep(i, 3) ma[lo[i]] = lo[i];
      rep(i, 3) ma[hi[i]] = hi[i];
      vector<int> ve;
      for (auto m : ma) ve.push_back(m.first);
      reps(i, ve.size() - 1) {
        if (ve[i] - ve[i - 1] > 150) {
          ma[ve[i]] = ma[ve[i - 1]] + 150;
        }
      }
      rep(i, 3) lo[i] = ma[lo[i]];
      rep(i, 3) hi[i] = ma[hi[i]];
      int mi = *min_element(lo.begin(), lo.end());
      rep(i, 3) lo[i] -= mi;
      rep(i, 3) hi[i] -= mi;
    }
    rep(i, 752) rep(j, 51) rep(k, 51) rep(l, 51) {
      dp[i][j][k][l] = -1;
    }
    loo = lo;
    hii = hi;
    return rec(751, amt[0], amt[1], amt[2]);
  }
};

int main() {
  vector<int> amt(3), lo(3), hi(3);
  rep(i, 3) cin >> amt[i];
  rep(i, 3) cin >> lo[i];
  rep(i, 3) cin >> hi[i];
  cout << ClassRankings().countWays(amt, lo, hi) << endl;
  return 0;
}
