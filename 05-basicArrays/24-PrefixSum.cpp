#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[4] = {1, 2, 3, 4};

    for (int i = 1; i < n; i++) {
        arr[i] = arr[i] + arr[i - 1];
    }

    cout << "Running Sum Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}