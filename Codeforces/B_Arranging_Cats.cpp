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
        cin >> n;
        string initial, final;
        cin >> initial >> final;
        int cnt=0,cnt1=0;
        for(int i=0;i<n;i++){
            if(initial[i]!=final[i]){
                if(initial[i]=='1'){
                    cnt++;
                }
                else if(final[i]=='1'){
                    cnt1++;
                }
            }
        }
        int a=min(cnt,cnt1)+abs(abs(cnt1-abs(cnt)));
        cout<<a<<el;
 
    }

    return 0;
}
