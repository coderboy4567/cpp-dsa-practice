// operators -> arithmatic, relational, logical
#include<iostream>
using namespace std;

int main()
{
    // Arithmatic
    // int a = 10, b = 5;

    // cout << "sum = " << (a+b) << endl;
    // cout << "difference = " << (a-b) << endl; 
    // cout << "multiply = " << (a*b) << endl;
    // cout << "division = " << (a/b) << endl;
    // cout << "modulo = " << (a%b) << endl;
    // return 0;

    // Relational
    // cout << (3 < 5) << endl; // true -> 1
    // cout << (3 > 5) << endl; // false -> 0
    // cout << (3 <= 5) << endl; // true -> 1
    // cout << (3 != 5) << endl; // true -> 1
    // cout << (3 == 5) << endl; // false -> 0

    //Logical
    cout <<( (3 < 5) || (3 > 5) )<< endl; // true -> 1
    cout <<( (3 == 5) && (3 < 5) )<< endl; // false -> 0
    cout << !(3 <= 5) << endl; // true -> 1

}