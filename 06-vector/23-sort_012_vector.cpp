#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& v) {
    int low = 0, mid = 0, high = v.size() - 1;
    while (mid <= high) {
        if (v[mid] == 0) swap(v[low++], v[mid++]);
        else if (v[mid] == 1) mid++;
        else swap(v[mid], v[high--]);
    }
}

int main() {
    vector<int> v = {2, 0, 2, 1, 1, 0};
    sortColors(v);
    for (int x : v) cout << x << " ";
    return 0;
}