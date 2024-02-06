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
    int n, num;
    cin >> n >> num;
    int min(num), max(num),cnt=0;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        if (num < min)
        {
            min = num;
            cnt++;
        }
        if (num > max)
        {
            max = num;
            cnt++;
        }
    }
    cout << cnt << el;
    return 0;
}