#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Charachter : ";
    cin >> ch;

    if(ch>=65 && ch<= 90) { // yaha par implicit type conversion use ho raha hai
        cout << "Uppercase";
    } else {
        cout << "Lowercase";
    }
    return 0;
}