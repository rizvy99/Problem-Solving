#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> missing(m);
        for (int i = 0; i < m; ++i) {
            cin >> missing[i];
        }
        
        unordered_set<int> known_questions;
        for (int i = 0; i < k; ++i) {
            int question;
            cin >> question;
            known_questions.insert(question);
        }
        
        string result = "";
        for (int i = 0; i < m; ++i) {
            if (known_questions.find(missing[i]) ) {
                result += '1';
            } else {
                result += '0';
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}
