#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t,v;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int s = 1;  // Minimum value for k
        int l = 1e9;  // Maximum value for k

        for (int i = 0; i < n; ++i) {
            int a, x;
            cin >> a >> x;

            if (a == 1) {
                s = max(s, x);
            } if (a == 2) {
                l = min(l, x);
            }
        

        // Exclude values specified by constraints of type 3
          v = 0;
        /*for (int i = 0; i < n; ++i) {
            int a, x;
            cin >> a >> x;*/

            if (a == 3) {
                v = x;
                break;
            }
        }

        if(s>l){
            cout<<"0"<<endl;
        }
        else{
            int ans;
            ans=l-s+1;
            for(int i=0;i<v;i++){
                if(i>=s&&i<=l){
                    ans--;
                }
            }
            cout<<ans<<endl;

        }

        // Adjust upper_bound based on the exclusion constraint
       /* if (exclude_value >= lower_bound && exclude_value <= upper_bound) {
            upper_bound--;
        }

        // Calculate the number of integers satisfying all constraints
        int result = max(0, upper_bound - lower_bound + 1);
        cout << result << endl;*/
    }

    return 0;
}
