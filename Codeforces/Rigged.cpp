#include<bits/stdc++.h>
using namespace std;
struct Weight
{
    int si;
    int ei;
};
int main()
{
int a;
cin>>a;
for(int i=0;i<a;i++)
{
    int b,c=1;
    cin>>b;
   struct Weight w[b];
   for(int i=0;i<b;i++)
   {
    cin>>w[i].si>>w[i].ei;
   }
   for(int i=0;i<b;i++)
   {
    if(w[0].ei<w[i].ei && w[0].si>w[i].si)
    {
        cout<<(w[i].si)+1<<endl;
        c++;
        break;
    }
   }

   if(c==1)
   {
     cout<<"-1"<<endl;
   }
}
return 0;
}

