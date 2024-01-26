#include <bits/stdc++.h>
using namespace std;
int main(){
    double N;
    int inteiro, aux, aux1;
    while(cin >> N){
    inteiro = N;
    N = 100*N;
    aux1 = N;
    cout << "NOTAS:"<<endl;
    cout << inteiro/100 <<" nota(s) de R$ 100.00"<<endl;
    aux = (inteiro%100);
    cout << aux/50 <<" nota(s) de R$ 50.00"<<endl;
    aux = (aux%50);
    cout << aux/20 <<" nota(s) de R$ 20.00"<<endl;
    aux = (aux%20);
    cout << aux/10 <<" nota(s) de R$ 10.00"<<endl;
    aux = (aux%10);
    cout << aux/5 <<" nota(s) de R$ 5.00"<<endl;
    aux = (aux%5);
    cout << aux/2 <<" nota(s) de R$ 2.00"<<endl;
    aux = (aux%2);

    cout <<"MOEDAS:"<<endl;
    cout << aux/1 <<" moeda(s) de R$ 1.00"<<endl;
    aux1 = aux1%100;
    cout <<  aux1/50 <<" moeda(s) de R$ 0.50"<<endl;
    aux1 = aux1%50;
    cout <<  aux1/25 <<" moeda(s) de R$ 0.25"<<endl;
    aux1 = aux1%25;
    cout <<  aux1/10 <<" moeda(s) de R$ 0.10"<<endl;
    aux1 = aux1%10;
    cout <<  aux1/5 <<" moeda(s) de R$ 0.05"<<endl;
    aux1 = aux1%5;
    cout <<  aux1/1 <<" moeda(s) de R$ 0.01"<<endl;
    }

    return 0;
}
