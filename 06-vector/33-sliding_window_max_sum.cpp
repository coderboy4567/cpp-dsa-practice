#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSumSubarrayK(const vector<int>& v, int k) {
    int windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += v[i];
    int maxSum = windowSum;
    for (size_t i = k; i < v.size(); i++) {
        windowSum += v[i] - v[i - k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main() {
    vector<int> v = {2, 1, 5, 1, 3, 2};
    cout << "Max Sum (K=3): " << maxSumSubarrayK(v, 3) << endl;
    return 0;
}