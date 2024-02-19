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
    ll n;
    cin>>n;
    pair<int,int>ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i].first>>ar[i].second;
    }
    sort(ar,ar+n);
    bool bl =false;
    for(int i=0;i<n-1;i++){
        if(ar[i].first<ar[i].second && ar[i].second>ar[i+1].second){
            cout<<"Happy Alex"<<el;
            bl = true;
            break;
        }
    }
    if(!bl){
        cout<<"Poor Alex"<<el;
    }
    return 0;
}
