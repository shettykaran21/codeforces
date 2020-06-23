#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();
void solve();

int main() {
  crap();
  solve();
  return 0;
}

void solve() {
  int n, c = 0;
  cin >> n;
  int h[n], a[n];

  for (int i = 0 ; i < n; ++i) {
    cin >> h[i] >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0 ; j < n; ++j) {
      if (i != j && h[i] == a[j]) {
        ++c;
      }
    }
  }
  cout << c;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}