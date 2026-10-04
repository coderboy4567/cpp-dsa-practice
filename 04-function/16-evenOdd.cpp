#include<iostream>
using namespace std;

void isEven(int n) {
    if(n % 2 == 0) {
        cout << "Number Even";
    }
    else {
        cout << "Number Odd";
    }
}

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;
    isEven(n);

    return 0;
}