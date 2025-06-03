#include <iostream>
#include <vector>

using namespace std;

/*
 * Problem:
 * Given a 2D matrix, return the elements in a snake-like pattern.
 * That is, left to right on even rows, and right to left on odd rows.
 */

class Solution {
public:
    // Function to return the elements of the matrix in snake pattern
    vector<int> snakePattern(const vector<vector<int>>& matrix) {
        vector<int> result;
        int rows = matrix.size();

        if (rows == 0) return result;

        int cols = matrix[0].size();

        for (int i = 0; i < rows; ++i) {
            if (i % 2 == 0) {
                // Left to right for even-indexed rows
                for (int j = 0; j < cols; ++j) {
                    result.push_back(matrix[i][j]);
                }
            } else {
                // Right to left for odd-indexed rows
                for (int j = cols - 1; j >= 0; --j) {
                    result.push_back(matrix[i][j]);
                }
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> snake = sol.snakePattern(matrix);

    cout << "Snake pattern: ";
    for (int val : snake) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}