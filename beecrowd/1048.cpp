#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;
       if(n>=0 && n<=400.00){
        float new_sal=n+(n*15)/100;
        float earn=(n*15)/100;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_sal<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earn<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
     else if(n>=400.01&& n<=800.00){
        float new_sal1=n+(n*12)/100;
        float earn1=(n*12)/100;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_sal1<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earn1<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(n>=800.01 && n<=1200.00){
        float new_sal2=n+(n*10)/100;
        float earn2=(n*10)/100;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_sal2<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earn2<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(n>=1200.01 && n<=2000.00){
        float new_sal3=n+(n*7)/100;
        float earn3=(n*7)/100;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_sal3<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earn3<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
     else{
        float new_sal4=n+(n*4)/100;
        float earn4=(n*4)/100;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<new_sal4<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earn4<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
    return 0;
}
