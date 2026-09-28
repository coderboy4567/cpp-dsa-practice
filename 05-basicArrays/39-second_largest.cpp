#include <iostream>
using namespace std;

template <typename T>
T findSecondLargest(T arr[], int n) {
    T first = arr[0], second = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    double nums[] = {12.5, 45.2, 33.8, 45.2, 19.1};
    cout << "Second Largest: " << findSecondLargest(nums, 5) << endl;
    return 0;
}