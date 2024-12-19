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
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            ar[i]=abs(ar[i]);
        }
        sort(ar,ar+n);
        cout<<ar[0]<<el;
     
    
    return 0;
}