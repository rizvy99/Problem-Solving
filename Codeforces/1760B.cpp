#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
     string s;
    cin>>t;
    while(t--){
     char   max  = '\0';
     int n;
     cin>>n;
      cin>>s;
     for(char ch : s){
         if (ch >= 'a' && ch <= 'z') {
             if (ch > max  ) {
                max  = ch;
            }
        }
        /* if (max  != '\0') {
         cout << int(max )-96 << endl;
     }*/
    }

    if (max  != '\0') {
         cout << int(max )-96 << endl;
     }
    }

    return 0;
}



