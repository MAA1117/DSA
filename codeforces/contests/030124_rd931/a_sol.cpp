#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int t = 1;
  cin >> t;
  int m = 30;
  vector f(m * 2, INT_MAX);
  f[0] = 0;
  for (int i = 1; i < 2 * m; ++i) {
    for (int j : {1, 3, 6, 10, 15}) {
      if (i >= j) { f[i] = min(f[i], f[i - j] + 1); }
    }
  }
  for (int ti = 0; ti < t; ++ti) {
    int n;
    cin >> n;
    int h = (n - m) / m;
    cout << h * f[m] + f[n - m * h] << "\n";
  }
}
