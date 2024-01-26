 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int ar[n];
     for(int i=0;i<n;i++){
        cin>>ar[i];
     }
     for(int j=1;j<=n;j++){
            for(int i=0;i<n;i++){
                if(ar[i]==j){
                    cout<<i+1<<" ";
                }
            }
     }
     return 0;
 }

