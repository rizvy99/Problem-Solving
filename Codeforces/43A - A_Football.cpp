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
    int n;
    cin >> n;
    string team1, team2;
    int score1 = 0, score2 = 0;

    for (int i = 0; i < n; i++) {
         string goal;
         cin >> goal;

            if(team1.empty()||goal==team1){
                team1=goal;
                score1++;
            }
            else{
                team2=goal;
                score2++;
            }
         }
         if(score1>score2){
            cout<<team1<<el;
         }
         else{
            cout<<team2<<el;
         }
         return 0;
}
