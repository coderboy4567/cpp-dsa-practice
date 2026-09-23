// Kadane's Algorithm -> Maximum Subarray Sum
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++) {

        currSum += arr[i];

        maxSum = max(maxSum, currSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    cout << "max subarray sum = " << maxSum << endl;

    return 0;
}