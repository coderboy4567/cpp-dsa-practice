#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {2, 0, 2, 1, 1, 0};

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        } else if (arr[i] == 1) {
            oneCount++;
        } else {
            twoCount++;
        }
    }

    int index = 0; 
    
    for (int i = 0; i < zeroCount; i++) {
        arr[index] = 0;
        index++;
    }
    for (int i = 0; i < oneCount; i++) {
        arr[index] = 1;
        index++;
    }
    for (int i = 0; i < twoCount; i++) {
        arr[index] = 2;
        index++;
    }

    cout << "Sorted Array of 0s, 1s, and 2s: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}