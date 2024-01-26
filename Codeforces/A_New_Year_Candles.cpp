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
    double a,b;
    cin>>a>>b;
    double sum=a;
    while(a>1){
        a=a/b;
        sum+=a;
    }
    int x=sum;
    cout<<x<<el;
    return 0;
}