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
        string s;
        cin>>n>>s;
        vector<int>val(26,0);
        for(auto c :s){
            val[c-'a']++;
        }
        bool flag = false;
        for(int i=1;i<=n-2;i++){
            if(val[s[i]-'a']>=2){
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "Yes" << el;
        } else {
            cout << "No" << el;
        }
     
    }
    return 0;
}