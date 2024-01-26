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
        int arr[n],count=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i = 0; i < n; i++){
            if(i == 0 && arr[i] != arr[i+1] && arr[i] != arr[i+2] ){
                cout<<(i+1)<<endl;
                break;
            }
            if(i == 0 && arr[i] != arr[i+1] && arr[i] == arr[i+2] ){
                continue;
            }
            if(i == n-1){
               cout<<(i+1)<<endl;
                break;
            }
            if(arr[i] != arr[i+1] && arr[i] != arr[i-1]){
               cout<<(i+1)<<endl;
               break;
            }
        }
    }
    return 0;
}