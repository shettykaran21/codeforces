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
  string s;
  getline(cin, s);

  if (s == "{}") {
    cout << 0;
  } else {
    set<char> s1;
    for (int i = 1; i < s.length(); i += 3) {
      s1.insert(s[i]);
    }
    cout << s1.size();
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}