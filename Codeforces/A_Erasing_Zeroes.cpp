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
    string s;
    while(t--)
    {
        int cnt=0,cnt1=0,ans=0,a=0;
        cin>>s;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                cnt=i;
                break;
            }
        }
        for(int i=s.length(); i>=cnt; i--)
        {
            if(s[i]=='1')
            {
                cnt1=i;
                break;
            }
        }
        for(int i=cnt; i<cnt1; i++)
        {
            if(s[i]=='0'){
                ans++;
            }
                
        }
        cout<<ans<<endl;
    }
    return 0;
}