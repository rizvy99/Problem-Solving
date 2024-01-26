#include <bits/stdc++.h>
using namespace std;
int main() {
    double amount;
     cin >> amount;
    int notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
     cout<< "NOTAS:"<<endl;
    for (int note : notes) {
        int count = amount / note;
        amount -= count * note;
        cout<<count << " nota(s) de R$ "<< fixed<< setprecision(2) <<note<<endl;
    }
     cout<< "MOEDAS:"<<endl;
    for (double coin : coins) {
        int count = amount / coin;
        amount -= count * coin;
         cout<<count<<" moeda(s) de R$ "<<fixed<<setprecision(2)<<coin<<endl;
    }

    return 0;
}
