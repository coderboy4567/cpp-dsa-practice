#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    if((n & 1) == 0) {
        cout << "Even";
    }
    if((n & 1) == 1) {
        cout << "Odd";
    }
}