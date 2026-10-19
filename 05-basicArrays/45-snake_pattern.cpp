#include <iostream>
using namespace std;

void printSnake(int mat[3][4], int r, int c) {
    for (int i = 0; i < r; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < c; j++) cout << mat[i][j] << " ";
        } else {
            for (int j = c - 1; j >= 0; j--) cout << mat[i][j] << " ";
        }
    }
}

int main() {
    int mat[3][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48}};
    printSnake(mat, 3, 4);
    return 0;
}