#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {0, 1, 0, 3, 12};

    int nonZeroIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

    while (nonZeroIndex < n) {
        arr[nonZeroIndex] = 0;
        nonZeroIndex++;
    }

    cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}