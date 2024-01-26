#include<bits/stdc++.h>
using namespace std;
int main()
{
     int currectpassword=2002;
     int password;

     while(true){
             cin>>password;
     if(password==currectpassword){
         cout<<"Acesso Permitido"<<endl;
         break;
         }
     else {
        cout<<"Senha Invalida"<<endl;
         }
     }
    return 0;
}




