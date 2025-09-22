#include <iostream>
using namespace std;

/*
Question 28:
Write a program to count digits in a given number.
*/

int main() {
    long long number;
    int count = 0;

    // Input number from user
    cout << "Enter a number: ";
    cin >> number;

    // Handle negative numbers
    if(number < 0) {
        number = -number;
    }

    // Count digits using loop
    if(number == 0) {
        count = 1;  // Special case for 0
    } else {
        while(number > 0) {
            number /= 10;
            count++;
        }
    }

    // Output number of digits
    cout << "Number of digits: " << count << endl;

    return 0;
}
