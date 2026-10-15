#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {16, 17, 4, 3, 5, 2};

    cout << "Leaders in array: ";

    int maxFromRight = arr[n - 1];
    cout << maxFromRight << " ";

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            cout << maxFromRight << " ";
        }
    }
    cout << "\n";

    return 0;
}