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
        //int a=5;
        string mins = "zzz", cur;
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < 26; j++){
                for(int k = 0; k < 26; k++){
                    if(i + j + k + 3 == n){
                        cur += char(i + 'a');
                        cur += char(j + 'a');
                        cur += char(k + 'a');
                        mins = min(cur, mins);
                    }
                }
            }
        }
        cout << mins <<el;
     
    }
    return 0;
}