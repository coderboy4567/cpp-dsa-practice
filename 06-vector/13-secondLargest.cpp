// Find second largest element

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> vec = {10, 25, 7, 40, 30};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int val : vec) {
        if(val > largest) {
            secondLargest = largest;
            largest = val;
        }
        else if(val > secondLargest && val != largest) {
            secondLargest = val;
        }
    }

    cout << "Second largest = " << secondLargest;

    return 0;
}