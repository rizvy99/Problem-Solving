 #include<bits/stdc++.h>
 using namespace std;
 int fibonacci(int n){
     if(n<=1)
        return n;
     else{
        return fibonacci(n-1)+fibonacci(n-2);
     }
 }
     int main()
     {
         int n;
         cin>>n;
         for(int i=0;i<n;i++){
            cout<<fibonacci(i)<<" ";
         }
         cout<<endl;
     }

