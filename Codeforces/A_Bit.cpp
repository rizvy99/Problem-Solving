#include<bits/stdc++.h>
#define ll long long int
#define nn "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   
    int n,a=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
      //string s;
      cin>>s;
      if(s[1]=='+'){
        a++;
      }else{
          a--;
      }
    }
    cout<<a<<endl;

    return 0;
}