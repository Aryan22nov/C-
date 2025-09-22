#include <iostream>
using namespace std;

/*
Question 31:
Write a program to reverse a given number.
*/

int main() {
    long long number, reversed = 0;
    
    // Input number from user
    cout << "Enter a number: ";
    cin >> number;

    // Handle negative numbers
    bool isNegative = false;
    if(number < 0) {
        isNegative = true;
        number = -number;
    }

    // Reverse the number
    while(number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if(isNegative) {
        reversed = -reversed;
    }

    // Output reversed number
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
