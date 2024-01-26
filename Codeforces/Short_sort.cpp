#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string cards;
        cin>>cards;

        if ((cards[0] == 'a' && cards[1] == 'b') ||
            (cards[0] == 'b' && cards[1] == 'a')||
            (cards[0] == 'a' && cards[2] == 'b') ||
            (cards[1] == 'c' && cards[2] == 'b')||
            (cards[0]=='c'&&cards[2]=='a')) {
            cout << "YES" <<  endl;
        } else {
             cout << "NO" << endl;
        }
    }
    return 0;
}
