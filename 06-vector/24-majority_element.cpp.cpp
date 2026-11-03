#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int>& nums) {
    int count = 0, candidate = 0;
    for (int num : nums) {
        if (count == 0) candidate = num;
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;
}

int main() {
    vector<int> v = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << majorityElement(v) << endl;
    return 0;
}