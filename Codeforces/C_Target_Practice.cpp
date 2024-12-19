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
        char ar[12][12];
        int cnt=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                cin>>ar[i][j];
                if(ar[i][j]=='X'){
                    if(i==1||i==10||j==1||j==10){
                        cnt++;
                    }else if(i==2||i==9||j==2||j==9){
                        cnt1++;
                    }else if(i==3||i==8||j==3||j==8){
                        cnt2++;
                    }else if(i==4||i==7||j==4||j==7){
                        cnt3++;
                    }else if(i==5||i==6||j==5||j==6){
                        cnt4++;
                    }
                }
            }
        }
        cout<<cnt*1+cnt1*2+cnt2*3+cnt3*4+cnt4*5<<el;
     
    }
    return 0;
}