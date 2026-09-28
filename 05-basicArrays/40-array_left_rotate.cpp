#include <iostream>
#include <algorithm>
using namespace std;

void leftRotate(int arr[], int n, int k) {
    k = k % n;
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6, k = 2;
    leftRotate(arr, n, k);
    for (int x : arr) cout << x << " ";
    return 0;
}