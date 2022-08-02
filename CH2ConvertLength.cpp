/*
Prompt: Write a program that takes an input given lengths expressed in feet and inches.
The program should then convert and output the lengths in centimeters. Assume that the
given lengths in feet and inches are integers
*/



#include <iostream>

using namespace std;

int main(){
    // Declarations of variables
    const double CONVERSION_TO_CM = 2.54;
    int feet, inches;
    // User input and storage
    cout << "Please enter feet and inches separated by a space for conversion: ";
    cin >> feet >> inches;
    cout << endl;
    // Calculation and output
    cout << "Total centimeters: " << ((12 * feet) + inches) * CONVERSION_TO_CM << endl;

    return 0;
}
