#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    // char ko int me cast karke ASCII value print ki
    cout << "ASCII value of '" << ch << "' is = " << int(ch) << endl;

    return 0;
}