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
     int n,count=0;
     cin>>n;
     char ar[n];
     for(int i=0;i<n;i++){
        cin>>ar[i];
     }
     for(int i=0;i<n;i++){
        if(ar[i]=='-'){
            count++;
        }
        else{
            continue;
        }
     }
     int sub=n-count;
     if(sub>count){
        int sub1=sub-count;
        cout<<sub1<<el;
     }else{
        int sub2=count-sub;
        cout<<sub2<<el;
     }
    }
    return 0;
}