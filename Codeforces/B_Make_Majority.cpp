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
        string v;
        cin>>v;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(v[i]=='1' && v[i+1]=='1' && v[i+2]=='1'){
                flag =true;
                break;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[i]=='1' && v[i+1]=='1'){
                cnt++;
                if(cnt>=2){
                flag = true;
                break;
                }
            }
        }
        if(v[0]=='1' && v[n-1]=='1'){
            flag = true;
            //break;
        }
        if(!flag){
            for(int i=0;i<n;i++){    
                if(v[i]=='1' && v[i+1]=='1' && (v[0]=='1' || v[n-1]=='1')){
                    flag = true; 
                    break;
                    }
                }
            }
            
        cout<<(flag? "Yes" : "No")<<el;
    }
    return 0;
}