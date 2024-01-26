#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
             cin >> a;
       bool is_prime = true;
  if (a == 0 || a == 1) {
    is_prime = false;
  }
  for (i = 2; i <= a/2; ++i) {
    if (a % i == 0) {
      is_prime = false;
      break;
    }
  }
  if (is_prime)
    cout << a << " eh primo";
  else
    cout << a << " nao eh primo";
    }
    return 0;
}

