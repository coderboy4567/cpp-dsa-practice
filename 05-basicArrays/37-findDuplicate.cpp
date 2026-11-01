#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 3, 4, 2, 2};

    int duplicate = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicate = arr[i];
                break;
            }
        }
        if (duplicate != -1) {
            break;
        }
    }

    cout << "Duplicate Element = " << duplicate << "\n";

    return 0;
}