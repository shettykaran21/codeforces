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
  int n;
  cin >> n;
  int cm = 0;
  int cc = 0;

  while (n--) {
    int m, c;
    cin >> m >> c;
    if (m > c) {
      ++cm;
    } else if (m < c) {
      ++cc;
    }
  }
  if (cm > cc) {
    cout << "Mishka";
  } else if (cm < cc) {
    cout << "Chris";
  } else {
    cout << "Friendship is magic!^^";
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}