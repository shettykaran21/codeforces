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
  string s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3;

  s4 = s1 + s2;
  sort(all(s4));
  sort(all(s3));
  if (s3 == s4) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}