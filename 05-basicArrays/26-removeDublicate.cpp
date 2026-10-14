#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int arr[8] = {1, 1, 2, 2, 2, 3, 4, 4};

    int uniqueIndex = 0; 

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[j];
        }
    }

    int totalUnique = uniqueIndex + 1;

    cout << "Unique Count = " << totalUnique << "\n";
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < totalUnique; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}