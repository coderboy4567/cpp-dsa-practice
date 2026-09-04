/*
  Topic: Basic Input / Output & Arithmetic Expressions
  Problem: Calculate Simple Interest and Total Amount
*/

#include <iostream>
using namespace std;

int main() 
{
    float principal, rate, time;

    // User input
    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Annual Interest Rate (%): ";
    cin >> rate;

    cout << "Enter Time Period (in years): ";
    cin >> time;

    // Calculations
    float simpleInterest = (principal * rate * time) / 100.0;
    float totalAmount = principal + simpleInterest;

    // Display output
    cout << "\n--- Calculation Summary ---" << endl;
    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Total Amount to Pay: " << totalAmount << endl;

    return 0;
}