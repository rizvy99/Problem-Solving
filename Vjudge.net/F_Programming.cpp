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

    bool isFishy = false;
    int cnt = 1;
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;

        if (word == "mumble") {
            cnt++;
        } else {
            int count = stoi(word);
            if (count != cnt) {
                 isFishy = true;
                break;
            }
            cnt++;
        }
    }

    if (isFishy) {
        cout << "something is fishy" << endl;
    } else {
        cout << "makes sense" << endl;
    }

    return 0;
}