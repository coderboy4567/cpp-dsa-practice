#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generatePascal(int n) {
    vector<vector<int>> tri(n);
    for (int i = 0; i < n; i++) {
        tri[i].resize(i + 1, 1);
        for (int j = 1; j < i; j++)
            tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
    }
    return tri;
}

int main() {
    auto res = generatePascal(5);
    for (auto& row : res) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }
    return 0;
}