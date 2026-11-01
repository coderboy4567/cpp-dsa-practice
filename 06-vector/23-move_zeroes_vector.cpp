#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int insertPos = 0;
    for (int x : nums) {
        if (x != 0) nums[insertPos++] = x;
    }
    while (insertPos < nums.size()) nums[insertPos++] = 0;
}

int main() {
    vector<int> v = {0, 1, 0, 3, 12, 0, 5};
    moveZeroes(v);
    for (int x : v) cout << x << " ";
    return 0;
}