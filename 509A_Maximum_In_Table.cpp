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
  int n;
  cin >> n;

  int arr[n][n];
  for (int i = 0; i < n; ++i) {
    arr[0][i] = 1;
    arr[i][0] = 1;
  }
  
  for (int i = 1; i < n; ++i) {
    for (int j = 1; j < n; ++j) {
      arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
    }
  }
  cout << arr[n - 1][n - 1];
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}