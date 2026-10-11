#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {12, 35, 1, 10, 34, 1};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element found\n";
    } else {
        cout << "Second Largest = " << secondLargest << "\n";
    }

    return 0;
}