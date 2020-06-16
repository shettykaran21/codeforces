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
  while (n--) {
    int num, c;
    cin >> num;
    int temp = num;
    c = 1;
    while (temp > 10) {
      temp /= 10;
      ++c;
    }
    for (int i = 0; i < c; ++i) {
      int lastDigit = num % 10;
      if (lastDigit != 0) {
        cout << lastDigit * pow(10, i) << " ";
      }
      num /= 10;
    }
    cout << '\n';
  }
  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}