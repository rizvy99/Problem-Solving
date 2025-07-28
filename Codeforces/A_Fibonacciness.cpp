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
        vector<int>v(5);
        for(int i=0;i<4;i++){
            cin>>v[i];
        }
        set <ll> st;
        st.insert(v[3]-v[2]);
        st.insert(v[2]-v[1]);
        st.insert(v[0]+v[1]);
        cout << 4-st.size() <<el;
     
    }
    return 0;
}