#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<bool> exists(n + 1, false);
  for (int i = 1; i <= n - 1; i++) {
    int x;
    cin >> x;
    exists[x] = true;
  }
  for (int i = 1; i <= n; i++) {
    if (!exists[i]) {
      cout << i;
      break;
    }
  }
  return 0;
}
