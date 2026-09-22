// WAF to calculate sum & product of all numbers in an array.
#include<iostream>
using namespace std;

int sumVal(int arr[], int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
int main() {
    int arr[] = {5,4,3,8,2};
    int size = 5;
    sumVal(arr, size);
    cout << "sum is = " << sumVal(arr, size);
}