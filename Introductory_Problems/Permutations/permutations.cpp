#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 2; i <= n; i += 2) {
    v.push_back(i);
  }
  for (int i = 1; i <= n; i += 2) {
    v.push_back(i);
  }

  if (n == 2 || n == 3) {
    cout << "NO SOLUTION";
  } else {
    for (auto x : v) {
      cout << x << ' ';
    }
  }
  return 0;
}
