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
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt=max(cnt,mp[a[i]]);
    }
    cout<<cnt<<el;

    return 0;
}