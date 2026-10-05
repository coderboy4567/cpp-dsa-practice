// pass by Value
#include<iostream>
using namespace std;

int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    
}
int main() {
    int a  = 5, b = 6;
    cout << "before Swap : " << endl;
    cout << a << endl;
    cout << b << endl;

    swap(a, b);
    cout << "before Swap : " << endl;
    cout << a << endl;
    cout << b << endl;
}

// pass by Reference 
// #include<iostream>
// using namespace std;

// int swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
    
// }
// int main() {
//     int a  = 5, b = 6;
//     cout << "Before Swap : " << endl;
//     cout << a << endl;
//     cout << b << endl;

//     swap(a, b);

//     cout << "After Swap : " << endl;
//     cout << a << endl;
//     cout << b << endl;
// }