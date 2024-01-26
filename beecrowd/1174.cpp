#include <bits/stdc++.h>
using namespace std;
int main() {
     float ar[100];
     for(int i=0;i<100;i++){
            cin>>ar[i];
     }
     for(int i=0;i<100;i++){
        if(ar[i]<=10){
            cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<ar[i]<<endl;
        }
     }
    return 0;
}



