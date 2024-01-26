#include <bits/stdc++.h>
using namespace std;
int main() {
   int t ;
   cin>>t;
   while(t--){
     string str1 = "codeforces";
     string str2 ;
     cin>>str2;

    int count=0;
    for (int i = 0;i < str1.length(); ++i) {
        if (str1[i] != str2[i]) {
            count++;

        }
    }
    cout<<count<<endl;
   }
    return 0;
}
