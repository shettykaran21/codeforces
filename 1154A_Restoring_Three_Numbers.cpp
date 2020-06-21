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
  vector<ll> a(4);
  for (int i = 0; i < 4; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2];
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}