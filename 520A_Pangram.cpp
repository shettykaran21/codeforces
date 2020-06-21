#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  int n;
  string s;
  cin >> n >> s;

  if (n < 26) {
    cout << "NO";
  } else {
    for (int i = 0; i < n; ++i) {
      s[i] = tolower(s[i]);
    }
    sort(s.begin(), s.end());
    // deb(s);

    int c = 1;
    for (int i = 1; i < n; ++i) {
      if (s[i] != s[i - 1]) {
        ++c;
      }
    }
    // deb(c);
    if (c == 26) {
      cout << "YES";
    } else {
      cout << "NO";
    }
  }

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}