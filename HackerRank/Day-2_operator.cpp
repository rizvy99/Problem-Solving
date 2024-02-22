#include<bits/stdc++.h>
using namespace std;
int main()
{
    double meal,sum;
    int tip,tax;
    cin>>meal>>tip>>tax;
    double tip_persen=(tip*meal)/100;
   double tax_persen=(tax*meal)/100;
    sum=(meal+tip_persen+tax_persen);
    cout<<int(sum)<<endl;

    return 0;
}
