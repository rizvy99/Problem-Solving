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
        vector<vector<int>> v(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        int sum =0;
        for(int k=0;k<n;k++){
            int i=0,j=k,min_val=0;
            while(i<n && j<n){
                if(v[i][j]<0){
                    min_val=min(min_val,v[i][j]);
                }
                i++,j++;
            }
            sum+= abs(min_val);
        }
        for(int k=1;k<n;k++){
            int i=k,j=0,min_val=0;
            while(i<n && j<n){
                if(v[i][j]<0){
                    min_val=min(min_val,v[i][j]);
                }
                i++,j++;
            }
            sum+= abs(min_val);
        }
        cout<<sum<<el;

     
    }
    return 0;
}