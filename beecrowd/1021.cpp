#include<bits/stdc++.h>
using namespace std;
int main()
{
   double n;
   cin>>n;
   cout<<"NOTAS:"<<endl;
   int a=n/100;
   cout<<a<<" nota(s) de R$ 100.00"<<endl;
   float n1=n-(a*100);
   int b=n1/50;
   cout<<b<<" nota(s) de R$ 50.00"<<endl;
   float n2=n1-(b*50);
   int c=n2/20;
   cout<<c<<" nota(s) de R$ 20.00"<<endl;
   float n3=n2-(c*20);
   int d=n3/10;
   cout<<d<<" nota(s) de R$ 10.00"<<endl;
   float n4=n3-(d*10);
   int e=n4/5;
   cout<<e<<" nota(s) de R$ 5.00"<<endl;
   float n5=n4-(e*5);
   int f=n5/2;
   cout<<f<<" nota(s) de R$ 2.00"<<endl;
   cout<<"MOEDAS:"<<endl;
   float n6=n5-(f*2);
   int g=n6/1;
   cout<<g<<" moeda(s) de R$ 1.00"<<endl;
   float n7=n6-(g*1);
   int h=n7/0.50;
   cout<<h<<" moeda(s) de R$ 0.50"<<endl;
   float n8=n7-(h*0.50);
   int i=n8/0.25;
   cout<<i<<" moeda(s) de R$ 0.25"<<endl;
   float n9=n8-(i*0.25);
   int j=n9/0.10;
   cout<<j<<" moeda(s) de R$ 0.10"<<endl;
   float n10=n9-(j*0.10);
   int k=n10/0.05;
   cout<<k<<" moeda(s) de R$ 0.05"<<endl;
   float n11=n10-(k*0.05);
   int m=n11/0.01;
   cout<<m<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}







