#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    
    int temp = a;
    a = b;
    b = c;
    c = temp;

    cout << "Rotated numbers = " << a << " " << b << " " << c;

    return 0;
}