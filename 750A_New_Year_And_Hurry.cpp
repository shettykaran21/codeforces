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
  int n, k;
  cin >> n >> k;

  int m = 240 - k;
  int t = 0, c = 0;
  for (int i = 1; i <= n; ++i) {
    t += 5 * i;
    if (t > m) {
      break;
    }
    ++c;
  }
  cout << c;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}