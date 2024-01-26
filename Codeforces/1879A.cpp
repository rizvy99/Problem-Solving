#include <bits/stdc++.h>
using namespace std;
struct Weight
{
    int si;
    int ei;
};
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int n, c = 1;
        cin >> n;
        struct Weight w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i].si >> w[i].ei;
        }
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (w[0].si <= w[i].si && w[0].ei <= w[i].ei)
            {
                flag = false;
            }
        }

        if (flag)
            cout << w[0].si << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}

