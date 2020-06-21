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

  int t = 0;
  int temp = n;
  while (temp--) {
    int p;
    cin >> p;
    t += p;
  }
  printf("%.12lf", (double)t / (double)n);

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}