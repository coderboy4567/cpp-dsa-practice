/*
  Topic: Basic Input / Output & Modulo Arithmetic
  Problem: Convert Total Seconds to Hours, Minutes, and Seconds
*/

#include <iostream>
using namespace std;

int main() 
{
    int totalSeconds;

    // User input
    cout << "Enter time in total seconds: ";
    cin >> totalSeconds;

    // Logic: 1 hour = 3600 seconds, 1 minute = 60 seconds
    int hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds % 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

    // Display output
    cout << "\nConverted Time Format: " 
         << hours << " Hours, " 
         << minutes << " Minutes, " 
         << seconds << " Seconds" << endl;

    return 0;
}