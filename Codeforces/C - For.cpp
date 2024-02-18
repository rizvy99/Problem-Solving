#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if (n < 3) {
        cout << "NO" <<  endl;
    }
    else if (a < 1 || b < 1 || c < 1) {
        cout << "NO" <<  endl;
    }
    else if (n > a + b + c) {
        cout << "NO" <<  endl;
    }
    else{
    cout << "YES" <<  endl;
    }

    return 0;
}