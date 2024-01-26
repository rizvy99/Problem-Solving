#include<bits/stdc++.h>
using namespace std;
int main()
{
    while (true) {
        int M, N;
         cin >> M >> N;
        if (M <= 0 || N <= 0) {
            break;
        }
        int sum = 0;
        if (M > N) {
             swap(M, N);
        }
        for (int i = M; i <= N; ++i) {
             cout << i << " ";
            sum += i;
        }
         cout << "Sum=" << sum <<  endl;
    }
    return 0;
}





