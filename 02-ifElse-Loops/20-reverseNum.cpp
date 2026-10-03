#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int rev = 0;

    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    } 
    cout << "reversed Number = " << rev;
    return 0;
}