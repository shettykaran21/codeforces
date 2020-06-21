#include <bits/stdc++.h>

using namespace std;

#define deb(x) cout << #x << " = " << x << '\n'
#define ll long long
#define PI 3.1415926535897932384626

void crap();

bool isPrime(int n) {
  if (n % 2 == 0) {
    return false;
  }
  for (int i = 3; i <= sqrt(n); i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int findFirst(int *arr, int size, int n) {
  int low = 0, high = n - 1, result = -1;

  while (low <= high) {
    int mid = (high + low) / 2;
    if (arr[mid] == n) {
      result = mid;
      high = mid - 1;
    } else if (arr[mid] > n) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return result;
}

int main() {
  crap();

  // int m, n;
  // cin >> m >> n;

  // for (int i = m; i <= n; ++i) {
  //   if (isPrime(i)) {
  //     cout << i << " ";
  //   }
  // }

  // bool array[10] = {false};
  // for (int i = 0; i < 10; ++i) {
  //   cout << array[i] << " ";
  // }

  // vector<int> v = {1, 2, 3, 4};
  // for (int i = 0; i < v.size(); ++i) {
  //   cout << v[i] << " ";
  // }
  // cout << '\n';

  // vector<int> v2(v.begin(), v.begin() + (v.size()) / 2);

  // for (int i = 0; i < v2.size(); ++i) {
  //   cout << v2[i] << " ";
  // }
  // cout << '\n';

  // int arr[] = {1, 1, 3, 3, 3, 4, 4, 6, 9, 9, 9, 10};
  // cout << findFirst(arr, 12, 9);

  cout << (10 + 5) % 2;

  return 0;
}

void crap() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
