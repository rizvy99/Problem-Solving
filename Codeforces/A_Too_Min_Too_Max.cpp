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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        /*for(int i=0;i<n-1;i++){
            if(ar[i]!=ar[i+1]){
            sum+=abs(ar[i]-ar[i+1]);
            sum+=abs(ar[n-1]-ar[0]);
            }
        }*/
        cout<<2 * (ar[n - 1] - ar[0]) + 2 * (ar[n - 2] - ar[1])<<el;
     
    }
    return 0;
}