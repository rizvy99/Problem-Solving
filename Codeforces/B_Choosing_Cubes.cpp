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
        int n,f,k,value =0,cnt=0,cnt1=0;
        cin>>n>>f>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        value = v[f-1] ;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++){
            if(v[i]==value){cnt++;} 
        }
        for(int i=k;i<n;i++){
            if(v[i]==value){cnt1++;}
        }
        if(cnt>0 && cnt1==0){cout<<"YES"<<el;}
        else if(cnt1>0 && cnt == 0){cout<<"NO"<<el;}
        else{cout<<"MAYBE"<<el;}
     
    }
    return 0;
}