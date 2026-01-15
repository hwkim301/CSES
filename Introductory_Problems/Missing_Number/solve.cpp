#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  ll ans = 1LL * n * (n + 1) / 2;
  for (int i = 1; i <= n - 1; i++) {
    int x;
    cin >> x;
    ans -= x;
  }
  cout << ans;
  return 0;
}
