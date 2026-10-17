#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(const vector<vector<int>>& mat) {
    int n = mat.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i]; // Primary diagonal
        if (i != n - 1 - i) {
            sum += mat[i][n - 1 - i]; // Secondary diagonal
        }
    }
    return sum;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Total Diagonal Sum: " << diagonalSum(matrix) << endl;
    return 0;
}