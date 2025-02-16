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
        string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
        }
        map<char,char>mp;
        auto au = st.rbegin();
        for(auto it = st.begin();it!=st.end();it++){
            mp[*it]=*au;
            au++;
        }
        for(int i=0;i<n;i++){
            cout<<mp[s[i]];
        }
        cout<<el;
    }
    return 0;
}