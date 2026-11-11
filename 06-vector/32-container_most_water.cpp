#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(const vector<int>& h) {
    int l = 0, r = h.size() - 1, ans = 0;
    while (l < r) {
        ans = max(ans, min(h[l], h[r]) * (r - l));
        if (h[l] < h[r]) l++;
        else r--;
    }
    return ans;
}

int main() {
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max Area: " << maxArea(heights) << endl;
    return 0;
}