#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int matrix[3][3];
    int sum[8] = {0}; // Stores the sums of rows, columns, and diagonals
    int targetSum;

    // Input the matrix
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
            sum[i] += matrix[i][j]; // Sum of rows
            sum[j + 3] += matrix[i][j]; // Sum of columns
            if (i == j) sum[6] += matrix[i][j]; // Sum of main diagonal
            if (i + j == 2) sum[7] += matrix[i][j]; // Sum of secondary diagonal
        }
    }

    // Calculate the target sum (it will be the same for rows, columns, and diagonals)
    targetSum = sum[0];

    // Calculate the minimum cost for each cell
    int minCost = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            minCost += abs(matrix[i][j] - targetSum); // Add the cost to make the cell value match the target sum
        }
    }

    // Output the minimum cost
    cout << minCost << endl;

    return 0;
}
