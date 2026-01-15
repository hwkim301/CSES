#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string dna;
  int ans = 1, cur = 1;
  cin >> dna;
  for (int i = 1; i < (int)dna.length(); i++) {
    if (dna[i] == dna[i - 1]) {
      cur++;
    } else {
      cur = 1;
    }
    ans = max(ans, cur);
  }
  cout << ans;
  return 0;
}
