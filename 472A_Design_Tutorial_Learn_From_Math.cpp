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
  ll n;
  cin >> n;

  vector<bool> isPrime(n + 1, true);
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; ++i) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }

  for (int i = 4, j = n - 4; i + j == n && i < n - 3 && j > 3; ++i, --j) {
    if (!isPrime[i] && !isPrime[j]) {
      cout << i << " " << j;
      break;
    }
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}