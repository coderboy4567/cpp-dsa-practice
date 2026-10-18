#include <iostream>
#include <algorithm>
using namespace std;

void rotate90(int mat[3][3], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            swap(mat[i][j], mat[j][i]);
    for (int i = 0; i < n; i++)
        reverse(mat[i], mat[i] + n);
}

int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    rotate90(mat, 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}