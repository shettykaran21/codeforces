#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  int n, h;
  cin >> n >> h;
  int w = 0;
  while (n--) {
    int a;
    cin >> a;
    if (a > h) {
      w += 2;
    } else {
      w += 1;
    }
  }
  cout << w;

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}