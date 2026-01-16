#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int answer = 0;
  for (ll m = 5; m <= n; m *= 5) {
    answer += n / m;
  }
  cout << answer << '\n';
  return 0;
}
