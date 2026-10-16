#include <iostream>
using namespace std;

int findEquilibrium(int arr[], int n) {
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++) totalSum += arr[i];
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];
        if (leftSum == totalSum) return i;
        leftSum += arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    cout << "Equilibrium Index: " << findEquilibrium(arr, 7) << endl;
    return 0;
}