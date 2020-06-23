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
  int n, p, q;
  cin >> n;
  cin >> p;

  vector<int> vec;
  while (p--) {
    int a;
    cin >> a;
    vec.push_back(a);
  }
  cin >> q;
  while (q--) {
    int a;
    cin >> a;
    vec.push_back(a);
  }

  int c = 0;
  sort(vec.begin(), vec.end());
  for (int i = 0; i < vec.size(); ++i) {
    if (vec[i + 1] != vec[i]) {
      ++c;
    }
  }
  if (c == n) {
    cout << "I become the guy.";
  } else {
    cout << "Oh, my keyboard!";
  }
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}