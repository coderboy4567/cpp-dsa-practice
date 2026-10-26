#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr1[5] = {1, 2, 4, 5, 6};
    
    int m = 4;
    int arr2[4] = {2, 3, 5, 7};

    cout << "Intersection (Common Elements): ";

    int i = 0;
    int j = 0;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++; 
        } else {
            j++;
        }
    }
    cout << "\n";

    return 0;
}