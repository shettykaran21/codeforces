#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    if (n % 2 == 0) {
      cout << n / 2 - 1 << '\n';
    } else {
      cout << n / 2 << '\n';
    }
  }
  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}