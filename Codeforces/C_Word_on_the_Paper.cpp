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
        char ch[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> ch[i][j];
            }
        }
        string word;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if(ch[i][j]=='.'){
                    continue;
                }
                else{
                    word+=ch[i][j];
                }
                 
            }
            
        }

        cout << word << endl;
    }

    return 0;
}