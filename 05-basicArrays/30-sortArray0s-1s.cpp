#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {0, 1, 0, 1, 1, 0};

    int left = 0;
    int right = n - 1;

    while (left < right) {
        if (arr[left] == 0) {
            left++;
        } else if (arr[right] == 1) {
            right--;
        } else {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }

    cout << "Segregated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}