#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;


        bool vanyaTurn = true;

        for (int i = 0; i < 10; ++i) {

            if (n % 3 == 0) {
                cout <<"First"<< endl;
                break;
            }


            if (!vanyaTurn) {
                if ((n + 1) % 3 == 0) {
                    n += 1;
                } else {
                    n -= 1;
                }
            }
             else  {
            cout <<"Second"<< endl;
        }
        }



    }

    return 0;
}
