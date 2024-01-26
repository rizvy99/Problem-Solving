 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int k,n,w,sum=0;
     cin>>k>>n>>w;
     for(int i=1;i<=w;i++){
        sum+=i;
     }
     int d=(sum*k)-n;
     if(d<0){
            cout<<"0"<<endl;

        }
        else{
            cout<<d<<endl;
        }

     return 0;
 }

