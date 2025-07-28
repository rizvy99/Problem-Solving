#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

pair<pair<int, int>, int> santaJourney(int H, int W, vector<string>& grid, int startX, int startY, string T) {
    set<pair<int, int>> visitedHouses; // To keep track of distinct houses
    int x = startX - 1; // Convert 1-based index to 0-based
    int y = startY - 1; // Convert 1-based index to 0-based

    // If starting cell is a house, add it to the set
    if (grid[x][y] == '@') {
        visitedHouses.insert({x, y});
    }

    for (char move : T) {
        int newX = x, newY = y;
        if (move == 'U') newX = x - 1;
        else if (move == 'D') newX = x + 1;
        else if (move == 'L') newY = y - 1;
        else if (move == 'R') newY = y + 1;

        // Check if the new position is within bounds and passable
        if (newX >= 0 && newX < H && newY >= 0 && newY < W && grid[newX][newY] != '#') {
            x = newX;
            y = newY;
            if (grid[x][y] == '@') {
                visitedHouses.insert({x, y});
            }
        }
    }

    return {{x + 1, y + 1}, (int)visitedHouses.size()}; // Convert back to 1-based index
}

int main() {
    int H, W, X, Y;
    cin >> H >> W;

    vector<string> grid(H);
    for (int i = 0; i < H; ++i) {
        cin >> grid[i];
    }

    cin >> X >> Y;
    string T;
    cin >> T;

    auto result = santaJourney(H, W, grid, X, Y, T);
    cout << result.first.first << " " << result.first.second << endl;
    cout << result.second << endl;

    return 0;
}
