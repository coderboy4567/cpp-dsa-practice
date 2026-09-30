// Count frequency of an element

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {2, 5, 2, 8, 2, 5, 9};

    int target = 2;
    int count = 0;

    for(int val : vec) {
        if(val == target) {
            count++;
        }
    }

    cout << "Frequency of " << target << " = " << count;

    return 0;
}