#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(const vector<vector<int>>& mat, int target) {
    int r = 0, c = mat[0].size() - 1;
    while (r < mat.size() && c >= 0) {
        if (mat[r][c] == target) return true;
        else if (mat[r][c] > target) c--;
        else r++;
    }
    return false;
}

int main() {
    vector<vector<int>> mat = {{10,20,30},{15,25,35},{27,29,37}};
    cout << (searchMatrix(mat, 29) ? "Found" : "Not Found") << endl;
    return 0;
}