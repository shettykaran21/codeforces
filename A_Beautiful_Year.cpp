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
  int y;
  cin >> y;

  while(true) {
    ++y;
    int yDub = y;
    string ys = to_string(yDub);
    sort(ys.begin(), ys.end());
    int c = 1;
    for (int i = 1; i < ys.length(); ++i) {
      if (ys[i] != ys[i - 1]) {
        ++c;
      }
    }
    if (c == 4) {
      cout << y;
      break;
    }
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}