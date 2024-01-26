#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n1,n2,n3,n4,em_score;
    cin>>n1>>n2>>n3>>n4;
    double average=(n1*2+n2*3+n3*4+n4*1)/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<average<<endl;
    if(average>=7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(average<5.0){
        cout<<"Aluno reprovado." <<endl;
    }
    else {
        cout<<"Aluno em exame."<<endl;
        cin>>em_score;
        double sum=(em_score+average)/2;
        cout<<"Nota do exame: " <<fixed<<setprecision(1)<<em_score<<endl;
        if(sum>=5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        else if(sum<=4.9){
            cout<<"Aluno reprovado." <<endl;
        }
        cout<<"Media final: " <<fixed<<setprecision(1)<<sum<<endl;

    }
    return 0;
}
