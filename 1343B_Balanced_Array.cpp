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
  ll t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    n /= 2;
    if (n & 1) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
      for (int i = 1; i <= n; ++i) {
        cout << 2 * i << " ";
      }
      ll sum = 0;
      for (int i = 1; i < n; ++i) {
        cout << 2 * i - 1 << " ";
        sum += 2 * i - 1;
      }
      cout << (n) * (n + 1) - sum << '\n'; 
    }
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}