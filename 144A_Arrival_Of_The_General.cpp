#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
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
  int n, i;
  cin >> n;

  int a[n];
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }

  int min, max, min_index, max_index;

  min = a[0];
  min_index = 0;
  max = a[0];
  max_index = 0;

  for (i = 0; i < n; i++) {
    if (min >= a[i]) {
      min = a[i];
      min_index = i;
    }
    if (max < a[i]) {
      max = a[i];
      max_index = i;
    }
  }

  if (min_index < max_index) {
    min_index = (n - 1) - min_index;
    cout << (min_index + max_index - 1);
  } else {
    min_index = (n - 1) - min_index;
    cout << (min_index + max_index);
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}