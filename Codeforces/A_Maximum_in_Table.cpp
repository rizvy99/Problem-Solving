#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int ar[10][10];
    for(int i=1; i<=1; i++){
        for(int j=1; j<=n; j++){
            ar[i][j]=1;
        }
    }
    for(int i=2; i<=n; i++){
        ar[i][1]=1;
        for(int j=2; j<=n; j++){
            ar[i][j]=ar[i-1][j]+ar[i][j-1];
        }
    }
    ll m=ar[n][n];
    cout<<m<<el;

    return 0;
}