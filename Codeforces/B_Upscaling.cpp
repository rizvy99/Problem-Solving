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
    char f,s;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x =2;
            f ='#';
            s = '.';
            if(i%2==1){
                f ='.';
                s ='#';
            }
            while(x--){
                for(int j=0;j<n;j++){
                    int y = 2;
                    while(y--){
                        if(j%2==1){
                            cout<<s;
                        }else{
                            cout<<f;
                        }
                    }
                }
                cout<<el;
            }
        }
    }

    return 0;
}