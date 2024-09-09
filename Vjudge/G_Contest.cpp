#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
string Sol ( ll N , ll K ) {
    if ( N < K ) return "No" ;
    if ( K > 3 ) return "No" ;
    if ( K == 3 ) {
        if ( N == 4 ) { return "Yes" ; }
        return "No" ;
    }
    if ( K == 2 ) {
        if ( N % 2 == 0 ) return "Yes" ;
        return "No" ;
    }
    return "Yes" ;
}
int main(){
    ll N , K ;
    cin >> N >> K ;
    cout <<Sol(N , K) <<el ;
    return 0 ;
}