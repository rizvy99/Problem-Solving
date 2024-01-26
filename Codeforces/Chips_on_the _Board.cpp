#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,min_value,min_value1,sum,a,b,j,k;
    cin>>t;
    for(int i=0;i<t;i++){
            int n;
    cin>>n;
        for(int j=0;j<n;j++){
            string a;
                cin>>a;
                int min_value1 = a[0];
                if (a[i] < min_value1) {
                    min_value1 = a[i];
                }
        }
            for(int k=0;k<n;k++){
                string b;
                cin>>b;
                int min_value = b[0];
                if (b[i] < min_value) {
                    min_value = b[i];
            }
        }
        if(min_value<min_value1){
              sum+=(min_value+a[j]);
        }
        else{
              sum+=(min_value1+b[k]);
        }
    }
    return 0;
}
