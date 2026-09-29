// Find minimum element

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> vec = {25, 10, 45, -5, 30, 8};

    int smallest = INT_MAX;

    for(int val : vec) {
        if(val < smallest) {
            smallest = val;
        }
    }

    cout << "Smallest = " << smallest;

    return 0;
}