#include<bits/stdc++.h>
using namespace std;
int main()
{
  //  int a,count=0,sum=0;
    while(true){
                int a,count=0,sum=0;
        cin>>a;
        if(a<0||a>10){
            cout<<"nota invalida"<<endl;

          if(a>=0||a<=10){
            count++;
            sum+=a;

          if(count==2){
                break;
            cout<<fixed<<setprecision(2)<<sum/count<<endl;
        }
        }
        }

    }
               // cout<<fixed<<setprecision(2)<<sum/count<<endl;

    return 0;
}
