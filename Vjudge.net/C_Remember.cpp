#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
using namespace std;
vector<int> parseInts(string s) {
    stringstream ss(s);
    vector<int> integer;
    int n;
    char c;
    while (ss >> n) {
        integer.push_back(n);
        ss >> c;
    }
    return integer;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    vector<int> integer = parseInts(s);
    for (int i = 0; i <integer.size();i++) {
        cout << integer[i]<<el;
    }
    cout << el;
    return 0;
}
