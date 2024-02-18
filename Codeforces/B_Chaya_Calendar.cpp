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
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=1;i<n;i++){
            if(ar[0]<ar[i]){
                ar[0]=ar[i];
            }else{
                int test=ar[i],year = 2;
                while(test<=ar[0]){
                    test=ar[i]*year;
                    year++;
                }
                ar[0]=test;
            }
        }
     cout<<ar[0]<<el;
    }
    return 0;
}