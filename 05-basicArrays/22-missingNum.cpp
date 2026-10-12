#include <iostream>
using namespace std;

int main() {
    int N = 5; 
    int arr[] = {1, 2, 4, 5};
    int size = N - 1;

    int expectedSum = (N * (N + 1)) / 2;

    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    int missingNumber = expectedSum - actualSum;

    cout << "Missing Number is: " << missingNumber << "\n";

    return 0;
}