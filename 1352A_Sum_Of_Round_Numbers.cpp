#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define all(x) x.begin(), x.end()
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
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int l, i = 0;
    vector<int> vec;

    while (n) {
      l = n % 10;
      if (l == 0) {
        ++i;
      } else {
        vec.push_back(l * pow(10, i));
        ++i;
      }
      n /= 10;
    }

    cout << vec.size() << '\n';
    for (auto x : vec) {
      cout << x << " ";
    }
    cout << '\n';
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}