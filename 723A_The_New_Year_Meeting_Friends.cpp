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
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;
  
  cout << max({x1, x2, x3}) - min({x1, x2, x3});
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}