#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trapWater(const vector<int>& h) {
    int l = 0, r = h.size() - 1, lMax = 0, rMax = 0, water = 0;
    while (l < r) {
        if (h[l] < h[r]) {
            lMax = max(lMax, h[l]);
            water += lMax - h[l++];
        } else {
            rMax = max(rMax, h[r]);
            water += rMax - h[r--];
        }
    }
    return water;
}

int main() {
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Trapped Water: " << trapWater(height) << endl;
    return 0;
}