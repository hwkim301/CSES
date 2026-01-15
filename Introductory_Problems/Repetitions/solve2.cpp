#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string dna;
  cin >> dna;
  char prev = ' ';
  int ans = 1, cur = 1;
  for (auto c : dna) {
    if (c == prev) {
      cur++;
    } else {
      prev = c;
      cur = 1;
    }
    ans = max(ans, cur);
  }
  cout << ans;
  return 0;
}
