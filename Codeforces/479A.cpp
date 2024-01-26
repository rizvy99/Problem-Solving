#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m,n,p,q,w,x,y,z,max;
    w=a+b*c;
    m=a*b+c;
    x=a*(b+c);
    z=(a+b)*c;
    y=a*b*c;
    n=a+b+c;
    p=(a*b)+c;
    q=a+(b*c);
    max=w;
    if(x>max){
        max=x;
    }
    if(y>max){
        max=y;
    }
    if(z>max){
        max=z;
    }
    if(m>max){
        max=m;
    }
    if(n>max){
        max=n;
    }
    if(p>max){
        max=p;
    }
    if(q>max){
        max=q;
    }
    cout<<max<<endl;

    return 0;
}
