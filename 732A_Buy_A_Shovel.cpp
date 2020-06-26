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
  int k, r;
  cin >> k >> r;

  int i = 2;
  ll t = (ll)k;
  while (true) {
    if (t % 10 == r || t % 10 == 0) {
      break;
    }
    t = k * i;
    ++i;
  }
  cout << i - 1;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}