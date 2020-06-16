#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

void solve() {
  int n;
  int c1 = 0;
  int c2 = 0;
  string s;
  cin >> n >> s;

  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == 'A') {
      ++c1;
    } else if (s[i] == 'D') {
      ++c2;
    }
  }
  if (c1 > c2) {
    cout << "Anton";
  } else if (c2 > c1) {
    cout << "Danik";
  } else {
    cout << "Friendship";
  }
}

int main() {
  crap();
  solve();
  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}