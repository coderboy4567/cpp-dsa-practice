#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr1[4] = {1, 3, 5, 7};

    int m = 3;
    int arr2[3] = {2, 4, 6};

    int arr3[7];

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        } else {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < n) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged Sorted Array: ";
    for (int idx = 0; idx < n + m; idx++) {
        cout << arr3[idx] << " ";
    }
    cout << "\n";

    return 0;
}