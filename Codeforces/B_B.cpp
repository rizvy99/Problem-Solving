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
        string s;
        cin >> s;
        
        map<char, int> freq;
        
        // Count the frequency of each character in the string
        for (char c : s) {
            freq[c] += 2; // Each character appears twice in the doubled string
        }
        
        string halfPalindrome = "";
        char oddChar = 0;
        int oddCount = 0;
        
        // Build the first half of the palindrome and identify any odd frequency character
        for (auto &entry : freq) {
            if (entry.second % 2 == 1) {
                oddChar = entry.first;
                oddCount++;
            }
            halfPalindrome += string(entry.second / 2, entry.first);
        }
        
        // If there's more than one character with an odd frequency, it's invalid
        if (oddCount > 1) {
            cout << "Impossible" << endl;
            continue;
        }
        
        string palindrome = halfPalindrome;
        
        // If there's an odd character, place it in the middle
        if (oddChar != 0) {
            palindrome += oddChar;
        }
        
        // Add the reverse of the first half to complete the palindrome
        reverse(halfPalindrome.begin(), halfPalindrome.end());
        palindrome += halfPalindrome;
        
        cout << palindrome << endl;
    }

    return 0;
}
 