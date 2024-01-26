#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    int ar[4];
    for(int i=0;i<4;i++){
        cin>>ar[i];
    }
        sort(ar,ar+4);
        c=(ar[3]-ar[0]);
        b=(ar[2]-c);
        a=(ar[3]-(b+c));

        cout<<a<<" "<<b<<" "<<c<<endl;
        return 0;
}
