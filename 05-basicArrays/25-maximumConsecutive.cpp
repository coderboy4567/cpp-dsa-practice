#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {1, 1, 0, 1, 1, 1};

    int currentCount = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        } else {
            currentCount = 0;
        }
    }

    cout << "Maximum Consecutive Ones = " << maxCount << "\n";

    return 0;
}