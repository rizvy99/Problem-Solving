#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ar[9]={"one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    for(int i=1;i<=9;i++){
        if(n==i){
            cout<<ar[i-1]<<endl;;
        }
        else if(n>9){
            cout<<"Greater than 9"<<endl;
            break;
        }
    }
    return 0;
}
