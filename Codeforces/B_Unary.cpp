#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000003;
int main() {
    string brainfuck;
    cin >> brainfuck;

    long long unary_value = 0;
    for (char c : brainfuck) {
        unary_value = (unary_value << 4) | ((c == '>' ? 0b1000 : c == '<' ? 0b1001 : c == '+' ? 0b1010 : c == '-' ? 0b1011 : c == '.' ? 0b1100 : c == ',' ? 0b1101 : c == '[' ? 0b1110 : 0b1111) & 0b1111);
        unary_value %= MOD;
    }

    cout << unary_value << endl;

    return 0;
}
