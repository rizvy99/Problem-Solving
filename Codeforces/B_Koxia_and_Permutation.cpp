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
        int n, k;
        cin >> n >> k;

        int left = 1, right = n;
        bool flag = true;
        
        while (left <= right) {
            if(flag){
                cout<<left++<<" ";
            }else{
                cout<<right--<<" ";
            }
            flag = !flag;
        }
        cout << el;
    }
    return 0;
}

     
    