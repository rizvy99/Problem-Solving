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
        int n;
        std::cin >> n;

        int chips = 0;
        for (int i = 0; i < n; ++i) {
            int cell;
            std::cin >> cell;
            chips += cell;
        }

        std::cout << (chips - 1) << std::endl;
    }

    return 0;
}

     
    