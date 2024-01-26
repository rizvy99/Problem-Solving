 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,even=0,odd=0,eI=0,oddI=0;
     cin>>n;
     int ar[n];
     for(int i=1;i<=n;i++){
        cin>>ar[i];
        if(ar[i]%2==0){
            even++;
            eI=i;
        }
        else{
            odd++;
            oddI=i;
        }
     }
     if(even==1){
        cout<<eI<<endl;
     }
     else{
        cout<<oddI<<endl;
     }
     return 0;
 }
