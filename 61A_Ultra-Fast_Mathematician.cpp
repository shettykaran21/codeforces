#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  string s1, s2;
  string s3("");
  cin >> s1 >> s2;

  for (int i = 0; i < s1.length(); ++i) {
    if (s1[i] == s2[i]) {
      s3 += "0";
    } else {
      s3 += "1";
    }
  }
  cout << s3;

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}