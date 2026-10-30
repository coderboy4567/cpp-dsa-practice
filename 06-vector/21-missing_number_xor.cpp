#include <iostream>
#include <vector>
using namespace std;

int findMissing(const vector<int>& arr, int n) {
    int xorAll = 0, xorArr = 0;
    for (int i = 1; i <= n; i++) xorAll ^= i;
    for (int x : arr) xorArr ^= x;
    return xorAll ^ xorArr;
}

int main() {
    vector<int> v = {1, 2, 4, 5, 6};
    cout << "Missing Number: " << findMissing(v, 6) << endl;
    return 0;
}