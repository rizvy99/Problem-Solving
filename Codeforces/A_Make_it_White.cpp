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
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        deque<char>dq(s.begin(),s.end());
        while(!dq.empty() && dq.front()=='W'){
            dq.pop_front();
        }
        while( !dq.empty() && dq.back()=='W'){
            dq.pop_back();
        }
        cout<<dq.size()<<el;
     
    }
    return 0;
}

