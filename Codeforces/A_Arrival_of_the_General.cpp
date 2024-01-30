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
    int n;
    cin>>n;
    int ar[n];
    for(int  i=0;i<n;i++){
        cin>>ar[i];
    }
    int max=0,min=102,x,y;
    for(int i=0;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
            x=i;
        }
    }
    for(int i=0;i<n;i++){
        if(ar[i]<=min){
            min=ar[i];
            y=i;
        }
    }
    if(x>y){
        x--;
    }
    cout<<x+(n-1)-y;
    return 0;
}