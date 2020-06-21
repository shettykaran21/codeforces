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
  int n;
  cin >> n;
  ll a[n];
  ll sum = 0;

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    sum += a[i];
  }
  // deb(*max_element(a, a + n));
  // deb(sum);
  cout << *max_element(a, a + n) * n - sum;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}