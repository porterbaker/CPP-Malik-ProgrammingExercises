/*
Write a program that takes as input any change expressed in cents. It should then
compute the number of half-dollars, quarters, dimes, nickels, and pennies to be
returned, returning as many half-dollars as possible, then quarters, dimes, nickels,
and pennies, in that order. For example, 483 cents should be returned as 9 half-dollars,
1 quarter, 1 nickel, and 3 pennies.
*/

#include <iostream>

using namespace std;

int main(){
    // Declarations of variables
    int centsInput, halfDollars, quarters, dimes, nickels, pennies;
    // Input from user and storage
    cout << "Please enter total change as a whole number: ";
    cin >> centsInput;
    cout << endl;
    // Calculations. Divide by value of coin and subtract the total of the coins from the initial input
    halfDollars = centsInput / 50;
    centsInput = centsInput % 50;
    quarters = centsInput / 25;
    centsInput = centsInput % 25;
    dimes = centsInput / 10;
    centsInput = centsInput % 10;
    nickels = centsInput / 5;
    centsInput = centsInput % 5;
    pennies = centsInput;
    // Output of each number of coins
    cout << "Half-Dollars: " << halfDollars << "\nQuarters: " << quarters << "\nDimes: " << dimes << "\nNickels: " << nickels << "\nPennies: " << pennies;

    return 0;
}
