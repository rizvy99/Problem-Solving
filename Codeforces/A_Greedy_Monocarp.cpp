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
        int n,k,sum=0,sum1=0;
        cin>>n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());

        int current_sum = 0,monocarp_sum = 0, chests_taken = 0;

         for (int i = 0; i < n; i++) {
            current_sum += a[i];
        }

         if (current_sum < k) {
           cout<< k - current_sum<<el;
            
        }

        else{
        for (int i = 0; i < n; i++) {
            monocarp_sum += a[i];
            chests_taken++;
            if(monocarp_sum==k){break;}
            else if (monocarp_sum > k) {
                monocarp_sum-=a[chests_taken-1];
                break;
            }
            
        }
        cout << k-monocarp_sum << el; 
        }
       }

    return 0;
}