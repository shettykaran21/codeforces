#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  string s;
  int flag = 0;

  cin >> s;
  if (s.length() == 1) {
    islower(s[0]) ? s[0] = toupper(s[0]) : s[0] = tolower(s[0]);
  } else {
    for (int i = 1; i < s.length(); ++i) {
      if (isupper(s[i])) {
        flag = 1;
      } else {
        flag = 0;
        break;
      }
    }

    if (flag == 1) {
      for (int i = 0; i < s.length(); ++i) {
        islower(s[i]) ? s[i] = toupper(s[i]) : s[i] = tolower(s[i]);
      }
    }
  }
  cout << s;

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}