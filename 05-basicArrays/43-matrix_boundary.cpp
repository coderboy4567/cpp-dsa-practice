#include <iostream>
using namespace std;

void printBoundary(int mat[4][4], int r, int c) {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1) {
                cout << mat[i][j] << " ";
                sum += mat[i][j];
            } else cout << "  ";
        }
        cout << endl;
    }
    cout << "Boundary Sum: " << sum << endl;
}

int main() {
    int mat[4][4] = {{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}};
    printBoundary(mat, 4, 4);
    return 0;
}