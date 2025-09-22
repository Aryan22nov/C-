#include <iostream>
#include <cmath>
using namespace std;

/*
Question 40:
Write a program to check whether a given number is an Armstrong number or not.
*/

int main() {
    int number, originalNumber, sum = 0, digits = 0;

    // Input number from user
    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Count number of digits
    int temp = number;
    while(temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate sum of digits raised to the power of 'digits'
    temp = number;
    while(temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Check if sum equals the original number
    if(sum == originalNumber) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
