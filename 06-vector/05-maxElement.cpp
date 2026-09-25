#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> vec = {12, 45, 7, 89, 23, 56};

    int largest = INT_MIN;

    for(int val : vec) {
        largest = max(largest, val);
    }

    cout << "Largest = " << largest;

    return 0;
}