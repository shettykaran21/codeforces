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
    string b, a;
    cin >> b;

    a = b[0];
    for (int i = 1; i < b.length() - 1; i += 2) {
      a += b[i];
      deb(a);
    }
    a += b[b.length() - 1];
    cout << a << '\n';
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}