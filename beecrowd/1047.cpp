#include<bits/stdc++.h>
using namespace std;
int main()
{
   int h1,m1,h2,m2;
   cin>>h1>>m1>>h2>>m2;
    int a=(h2*60+m2)-(h1*60+m1);
    int hour=a/60;
    int minit=a%60;
    if(a<60&&a!=0){
        cout<<"O JOGO DUROU 0 HORA(S) E "<<a<<" MINUTO(S)"<<endl;
    }else if(a==0){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }else {
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minit<<" MINUTO(S)"<<endl;
    }
    return 0;
}

