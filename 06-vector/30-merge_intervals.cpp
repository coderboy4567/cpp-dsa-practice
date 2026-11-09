#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    for (auto& interval : intervals) {
        if (merged.empty() || merged.back()[1] < interval[0])
            merged.push_back(interval);
        else
            merged.back()[1] = max(merged.back()[1], interval[1]);
    }
    return merged;
}

int main() {
    vector<vector<int>> iv = {{1,3}, {2,6}, {8,10}, {15,18}};
    for (auto& p : mergeIntervals(iv)) cout << "[" << p[0] << "," << p[1] << "] ";
    return 0;
}