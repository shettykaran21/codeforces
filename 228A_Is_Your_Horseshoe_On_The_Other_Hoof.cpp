#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
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
  int n;
  vector<int> vec;
  for (int i = 0; i < 4; ++i) {
    cin >> n;
    vec.push_back(n);
  }
  sort(vec.begin(), vec.end());

  int c = 1;
  for (int i = 0; i < 4; ++i) {
    if (vec[i + 1] == vec[i]) {
      ++c;
    }
  }
  cout << c - 1;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}