#include <bits/stdc++.h>
using namespace std;
int main() {
    const int arrsize=20;
    int ar[arrsize];
      for(int i=0;i<20;i++){
         cin>>ar[i];
      }
         for(int i=0;i<arrsize/2;i++){
                int temp=ar[i];
               ar[i]=ar[arrsize-1-i];
               ar[arrsize-1-i] =temp;
      }
      for(int i=0;i<20;i++){
        cout<<"N["<<i<<"] = "<<ar[i]<<endl;
      }
    return 0;
}



