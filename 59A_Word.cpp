#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  string s;
  cin >> s;

  int c1 = 0;
  int c2 = 0;
  for (int i = 0; i < s.length(); ++i) {
    if (isupper(s.at(i))) {
      ++c1;
    } else {
      ++c2;
    }
  }
  if (c1 > c2) {
    for (int i = 0; i < s.length(); ++i) {
      s[i] = toupper(s[i]);
    }
  } else {
    for (int i = 0; i < s.length(); ++i) {
      s[i] = tolower(s[i]);
    }
  }
  cout << s;
  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}