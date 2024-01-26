#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number[6],count=0;
    for(int i=0;i<6;++i){
        cin>>number[i];
        if(number[i]>0){
                count++;
        }
    }
      cout<< count<<" valores positivos"<<endl;
      return 0;
}
