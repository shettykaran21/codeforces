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
  int flag = 1;

  while (n--) {
    int a;
    cin >> a;
    if (a == 1) {
      flag = 1;
      break;
    } else {
      flag = 0;
    }
  }
  if (flag == 1) {
    cout << "HARD";
  } else {
    cout << "EASY";
  }

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}