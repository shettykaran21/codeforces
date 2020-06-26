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
  int n, input;
  cin >> n;

  vector<int> vec;
  for (int i = 0; i < n; ++i) {
    cin >> input;
    vec.push_back(input);
  }

  int c = 0;
  int max = vec[0];
  int min = vec[0];
  for (int i = 1; i < n; ++i) {
    if (vec[i] > max) {
      ++c;
      max = vec[i];
    }
    if (vec[i] < min) {
      ++c;
      min = vec[i];
    }
  }
  cout << c;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}