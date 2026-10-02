#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    if(n < 0) {
        cout << "Negative";
    }
    if(n > 0) {
        cout << "Positive";
    }
    if(n == 0) {
        cout << "Zero";
    }
    return 0;
}