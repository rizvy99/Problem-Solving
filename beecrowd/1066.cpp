#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5],evencount =0,oddcount=0,poscount=0,negcount=0;
    for(int i=0;i<5;++i){
        cin>>ar[i];
        if(ar[i]%2==0){
            evencount++;
              if(ar[i]>0){
            poscount++;
          }
        else if(ar[i]<0){
            negcount++;
          }
        }
        else if(ar[i]%2!=0){
            oddcount++;
              if(ar[i]>0){
            poscount++;
          }
        else if(ar[i]<0){
            negcount++;
          }
        }
    }
         cout<<evencount<<" valor(es) par(es)"<<endl;
            cout<<oddcount<<" valor(es) impar(es)"<<endl;
            cout<<poscount<<" valor(es) positivo(s)"<<endl;
            cout<<negcount<<" valor(es) negativo(s)"<<endl;

            return 0;
}
