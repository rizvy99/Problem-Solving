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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b;
        int current = 1;
        for(int i=0;i<n;i++){
            while(current==a[i]){
                current++;
            }
            b.push_back(current);
            current++;

        }
        cout<<b.back()<<el;
    }

    return 0;
}