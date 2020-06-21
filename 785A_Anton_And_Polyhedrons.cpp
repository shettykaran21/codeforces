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
  int f = 0;

  while (n--) {
    string s;
    cin >> s;
    if (s == "Tetrahedron") {
      f += 4;
    } else if (s == "Cube") {
      f += 6;
    } else if (s == "Octahedron") {
      f += 8;
    } else if (s == "Dodecahedron") {
      f += 12;
    } else {
      f += 20;
    }
  }
  cout << f;  
  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}