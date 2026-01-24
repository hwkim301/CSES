#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    ll a, b;
    cin >> a >> b;
    if ((a + b) % 3 == 0 && b <= 2 * a && a <= 2 * b) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
