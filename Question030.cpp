#include <iostream>
using namespace std;

/*
Question 30:
Write a program to calculate LCM of two numbers.
*/

int main() {
    int num1, num2, lcm;

    // Input two numbers from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Start from the maximum of num1 and num2
    lcm = (num1 > num2) ? num1 : num2;

    // Loop until LCM is found
    while(true) {
        if(lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        lcm++;
    }

    // Output the LCM
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}
