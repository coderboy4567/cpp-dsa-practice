#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[4] = {2, 7, 11, 15};
    int target = 18;

    int start = 0;
    int end = n - 1;
    bool found = false;

    while (start < end) {
        int currentSum = arr[start] + arr[end];

        if (currentSum == target) {
            cout << "Pair found: " << arr[start] << " and " << arr[end] << "\n";
            cout << "Indices: " << start << " and " << end << "\n";
            found = true;
            break;
        } else if (currentSum > target) {
            end--;  
        } else {
            start++;
        }
    }

    if (!found) {
        cout << "No pair found with target sum\n";
    }

    return 0;
}