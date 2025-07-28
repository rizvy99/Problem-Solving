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
    int n; // Number of events
    cin >> n;

    int s = 0; // Current number of people at the stop

    for (int i = 0; i < n; ++i) {
        char event_type;
        cin >> event_type;

        if (event_type == 'P') {
            int p;
            cin >> p;
            s += p; // Add people arriving to the current count
        } else if (event_type == 'B') {
            int b;
            cin >> b;

            // Compare the number of seats with the current number of people
            if (b > s) {
                cout << "YES\n"; // Monocarp can board
            } else {
                cout << "NO\n"; // Monocarp cannot board
            }

            s -= min(b, s); // Update the number of people at the stop
        } 
    }
    }  
    return 0;
}