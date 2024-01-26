#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j=7;
    while (i>=9){
        cout<<"I="<<i<<" J="<<j<<endl;
        j--;
        if(j==4){
        i+=2;
        j=7;
        }
    }
    return 0;
}

