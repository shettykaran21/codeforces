#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  int n;
  cin >> n;

  int a[n + 1];
  int x[n];

  for (int i = 0; i < n; ++i) {
    cin >> x[i];
  }

  for (int i = 0; i < n; ++i) {
    a[x[i]] = i + 1;
  }

  for (int i = 1; i <= n; ++i) {
    cout << a[i] << " ";
  }

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}