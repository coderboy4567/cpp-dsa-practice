#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    
    bool isSorted = true;
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }
    if(isSorted == true) {
        cout << "Sorted";
    } else {
        cout << "Not Sorted";
    }
    return 0;

}