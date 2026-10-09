#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    int ansIndex = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            ansIndex = i;
            break;
        }
    }

    if (ansIndex != -1) {
        cout << "Element found at index: " << ansIndex << endl;
    } else {
        cout << "Element not found in array" << endl;
    }

    return 0;
}