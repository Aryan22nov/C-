#include <iostream>
using namespace std;

/*
Question 18:
Write a program that takes three numbers as input and finds the middle 
(second largest) number.
*/

int main() {
    int a, b, c, middle;

    // Input three numbers
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    // Determine the middle (second largest) number using conditional statements
    if((a > b && a < c) || (a < b && a > c))
        middle = a;
    else if((b > a && b < c) || (b < a && b > c))
        middle = b;
    else
        middle = c;

    // Output the middle number
    cout << "The middle (second largest) number is: " << middle << endl;

    return 0;
}
