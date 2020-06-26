#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define all(x) x.begin(), x.end()
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
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int s1 = 0, s2 = 0;

    s1 += (1 << n);
    for (int i = 1; i < n / 2; ++i) {
      s1 += (1 << i);
    }
    for (int i = n / 2; i < n; ++i) {
      s2 += (1 << i);
    }
    cout << s1 - s2 << '\n';
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}