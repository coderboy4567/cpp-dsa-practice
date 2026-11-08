#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(const vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, 1);
    int prefix = 1, suffix = 1;
    for (int i = 0; i < n; i++) {
        res[i] = prefix;
        prefix *= nums[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= suffix;
        suffix *= nums[i];
    }
    return res;
}

int main() {
    vector<int> v = {1, 2, 3, 4};
    for (int x : productExceptSelf(v)) cout << x << " ";
    return 0;
}