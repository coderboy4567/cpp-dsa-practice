#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(const vector<int>& a, const vector<int>& b) {
    vector<int> res;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) i++;
        else if (b[j] < a[i]) j++;
        else {
            if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
            i++; j++;
        }
    }
    return res;
}

int main() {
    vector<int> v1 = {1, 2, 2, 4, 6}, v2 = {2, 2, 3, 6, 8};
    for (int x : findIntersection(v1, v2)) cout << x << " ";
    return 0;
}