#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
/*int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int ar[n],sum=0,sum1=0,turn=0,num=n,left=1,right=n;
    for(int i=1;i<=n;i++){
        cin>>ar[i];    
    }
    while(num!=0){
        if(turn%2!=0){
            if(ar[left]>ar[right]){
                sum+=ar[left];
                left++;
            }else{
                sum+=ar[right];
                right--;
            }
        }else{
            if(ar[left]>ar[right]){
                sum1+=ar[left];
                left++;
            }else{
                sum1+=ar[right];
                right--;
            }
        }
        turn++;
        num--;
    }
    cout<<sum1<<" "<<sum<<el;
    
    return 0;
}*/
//alternative way
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){cin>>v[i];}
    int s=0,d=0,f=0;
    while(!v.empty()){
        
        if(f!=1){
            if(*v.begin()>v.back()){
                s+=v[0];
                v.erase(v.begin());
            }
            else{
                s+=v.back();
                v.pop_back();
            }
            f++;
        }
        else{
            if(*v.begin()<v.back()){
                d+=v.back();
                v.pop_back();
            }else{
                d+=v[0];
                v.erase(v.begin());
            }
            f--;
        }
        
    }
    cout<<s<<" "<<d<<el;
}