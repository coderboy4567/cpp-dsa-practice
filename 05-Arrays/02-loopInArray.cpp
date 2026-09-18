// Loop in array and print easily
#include<iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size];

    // input marks using loop
    cout << "Enter Marks students : ";
    for(int i=0; i<size; i++) {
        cin >> marks[i];
    }

    // output marks using loop
     for(int i=0; i<size; i++) {
        cout << marks[i] << endl;
    }

    // check size of array
    cout <<"size of array = "<< sizeof(marks);
}