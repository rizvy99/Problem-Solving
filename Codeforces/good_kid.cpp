#include<bits/stdc++.h>
using namespace std;
void low(int arr[], int s) {
    int sum = 1;
   int min =0;
    for (int i = 0; i < s; i++) {

        if (arr[min]>arr[i]) {
            min=i;
        }
    }
   arr[min]++;
    for (int i = 0; i < s; i++) {
        sum *= arr[i];
    }
    cout << sum<<endl;
}
int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int ar[n];
        for (int j = 0; j < n; j++) {
            cin >> ar[j];
        }
        int s = sizeof(ar)/4;
        low(ar, s);
    }
    return 0;
}
