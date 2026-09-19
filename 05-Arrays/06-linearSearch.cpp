#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return i; // Found
        }
    }
    return -1; // Not Found
}
int main() {
    int arr[] = {4,  2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 7;
    if(size == target) {
        cout << "your target index = " << linearSearch(arr, size, target) << endl;
    }
    else {
        cout << "invalid number = " << linearSearch(arr, size, target) << endl;
    }
}
// time complexity : - O(n)