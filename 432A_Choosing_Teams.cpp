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
  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int c = 0;
  for (int i = 0; i < n; i++) {
    if (5 - arr[i] >= k) {
      c++;
    }
  }
  cout << c / 3;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}