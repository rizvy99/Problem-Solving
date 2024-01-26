#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        char square[3][3];

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> square[i][j];
            }
        }

//char findReplacedLetter(char square[3][3]) {
    // Check each row

    for (int i = 0; i < 3; ++i) {
        char missing = '?';
        int countA = 0, countB = 0, countC = 0;

        for (int j = 0; j < 3; ++j) {
            if (square[i][j] == 'A') countA++;
            else if (square[i][j] == 'B') countB++;
            else if (square[i][j] == 'C') countC++;
            //else missing = 'A' + j;


        if (countA == 3&& countB == 3)cout<< "C"<<endl;
        if (countA == 3 && countC == 3)cout<< "B"<<endl;
        if (countB == 3 && countC == 3) cout<< "A"<<endl;

        //if (missing != '?') return missing;
    }
    }
/*
    // Check each column
    for (int j = 0; j < 3; ++j) {
        //char missing = '?';
        int countA = 0, countB = 0, countC = 0;

        for (int i = 0; i < 3; ++i) {
            if (square[i][j] == 'A') countA++;
            else if (square[i][j] == 'B') countB++;
            else if (square[i][j] == 'C') countC++;
            //else missing = 'A' + i;
        }

        if (countA == 3 && countB == 3) return 'C';
        if (countA == 3 && countC == 3) return 'B';
        if (countB == 3 && countC == 3) return 'A';

        //if (missing != '?') return missing;
    }
*/
    //return '?';  // This line should never be reached if the input is valid.
}


        //char result = findReplacedLetter(square);
//cout << result << endl;


    return 0;
}
