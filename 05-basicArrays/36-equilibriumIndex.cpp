#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[7] = {-7, 1, 5, 2, -4, 3, 0};

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int ansIndex = -1;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            ansIndex = i;
            break;
        }

        leftSum += arr[i];
    }

    if (ansIndex != -1) {
        cout << "Equilibrium Index found at: " << ansIndex << "\n";
    } else {
        cout << "No Equilibrium Index found\n";
    }

    return 0;
}