#include <iostream>
#include <vector>
using namespace std;

pair<int, int> twoSum(const vector<int>& v, int target) {
    int left = 0, right = v.size() - 1;
    while (left < right) {
        int sum = v[left] + v[right];
        if (sum == target) return {left, right};
        else if (sum < target) left++;
        else right--;
    }
    return {-1, -1};
}

int main() {
    vector<int> v = {2, 7, 11, 15, 20};
    auto ans = twoSum(v, 22);
    cout << "Indices: " << ans.first << ", " << ans.second << endl;
    return 0;
}