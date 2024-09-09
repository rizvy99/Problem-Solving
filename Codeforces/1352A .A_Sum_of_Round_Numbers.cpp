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
    ll t,n;
    int aa[100000];
    cin>>t;
    while(t--)
    {
        int d=0,rem=0;
        cin>>n;
        if(n >= 1000){
            rem=n%1000;
            aa[d++]=n-rem;
            n%=1000;
        }
        if(n >= 100){
            rem=n%100;
            aa[d++]=n-rem;
            n%=100;
        }
        if(n >= 10){
            rem=n%10;
            aa[d++]=n-rem;
            n%=10;
        }
        if(n<10 && n>0){
            aa[d++]=n;
        }
        vector<int>va;
        /*for(int i=0; i<d; i++){
            va.push_back(aa[i]);
        }
        cout<<va.size()<<endl;*/
        cout<<d;
        for(int i=0; i<va.size(); i++){
            cout<<va[i]<<" ";
        }
        cout<<endl;
    }
}
