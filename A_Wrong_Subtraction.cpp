#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  ll n;
  int k, lastDigit;
  cin >> n >> k;

  while (k--) {
    lastDigit = n % 10;
    if (lastDigit == 0) {
      n /= 10;
    } else {
      n -= 1;
    }
  }
  cout << n;

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}