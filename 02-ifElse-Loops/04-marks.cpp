#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter yout Marks : ";
    cin >> n;

    if(n>=90){
        cout << "A\n";
    } else if(n >=80 && n < 90) {
        cout << "B";
    } else {
        cout << "C";
    }
    return 0;
}