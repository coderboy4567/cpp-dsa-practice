#include<iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 8;

    if(a >= b && a >= c) {
        cout << "Largest = " << a;
    }
    if(b >= a && b >= c) {
        cout << "Largest = " << b;
    }
    else {
        cout << "Largest = " << c;
    }
}