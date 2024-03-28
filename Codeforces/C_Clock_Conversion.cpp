#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;

        int ho = stoi(s.substr(0, 2));
        int min = stoi(s.substr(3, 2));

        string str;
        if (ho < 12) {
            str = "AM";
        } else {
            str = "PM";
        }
        if (ho == 0) {
            ho = 12;
        } else if (ho > 12) {
            ho -= 12;
        }
        if(ho<10){
             cout <<0<< ho << ":" << (min < 10 ? "0" : "") << min << " " << str << el;
        }else{
             cout << ho << ":" << (min< 10 ? "0" : "") << min << " " << str << el;
        }
    }

    return 0;
}
