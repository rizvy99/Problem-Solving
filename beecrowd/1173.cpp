#include <bits/stdc++.h>
using namespace std;
int main() {
    int ar[10], n;
      cin>>n;
      for(int i=0;i<10;i++){
            ar[i]=n;
          n*=2;
       cout<<"N["<<i<<"] = "<<ar[i]<<endl;
      }
    return 0;
}

