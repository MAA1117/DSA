// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;

  if (n == k) {
    for (int i = 0; i < n; ++i) {
      cout << "1 ";
    }
    cout << '\n';
  } else if (k == 1) {
    for (int i = 1; i <= n; ++i) {
      cout << i << " ";
    }
    cout << '\n';
  } else {
    cout << "-1\n";
  }
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
