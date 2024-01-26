#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::string contestLog;
        std::cin >> contestLog;

        int solvedProblems = 0;
        int timeSpent = 1; // Monocarp spends 1 minute on the first problem

        for (int i = 0; i < n; ++i) {
            // Calculate the time Monocarp spends on the current problem based on its position in the alphabet
            int problemTime = contestLog[i] - 'A' + 1;

            // Check if Monocarp has spent enough time to solve the current problem
            if (timeSpent <= problemTime) {
                ++solvedProblems;
                timeSpent = 1; // Reset time spent for the next problem
            } else {
                timeSpent -= problemTime;
            }

            ++timeSpent; // Increment time spent for each minute
        }

        std::cout << solvedProblems << std::endl;
    }

    return 0;
}

