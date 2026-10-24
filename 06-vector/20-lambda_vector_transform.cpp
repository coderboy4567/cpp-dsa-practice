#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void applyOperation(vector<int>& v, int (*op)(int)) {
    for (int& x : v) x = op(x);
}

int main() {
    vector<int> nums = {2, 3, 4, 5};
    applyOperation(nums, [](int n) { return n * n + 1; });
    for (int x : nums) cout << x << " ";
    return 0;
}