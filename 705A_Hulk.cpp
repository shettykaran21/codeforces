#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

int main() {
  crap();

  int n;
  cin >> n;
  string s = "I hate ";
  for (int i = 2; i <= n; ++i) {
    if (i % 2 == 0) {
      s += "that I love ";
    } else {
      s += "that I hate ";
    }
  }
  s += "it";
  cout << s;

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}