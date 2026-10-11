#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 2, 1};

    int start = 0;
    int end = n - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (arr[start] != arr[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        cout << "Array is Palindrome\n";
    } else {
        cout << "Array is Not Palindrome\n";
    }

    return 0;
}