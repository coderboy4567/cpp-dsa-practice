#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {10,12,17,25,20};
    int evenCount = 0;
    int oddCount = 0;

    for(int i=0; i<n; i++) {
        if(arr[i]%2==0) {
            evenCount++;
        } 
        else {
            oddCount++;
        }
    }
    cout << "EvenCount = " << evenCount << endl;
    cout << "oddCount = " << oddCount;
    return 0;
}