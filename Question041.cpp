#include <iostream>
#include <cmath>
using namespace std;

/*
Question 41:
Write a program to print all Armstrong numbers under 1000.
*/

int main() {
    cout << "Armstrong numbers under 1000 are: ";

    for(int number = 1; number < 1000; number++) {
        int sum = 0, temp = number, digits = 0;

        // Count number of digits
        int t = temp;
        while(t != 0) {
            t /= 10;
            digits++;
        }

        // Calculate sum of digits raised to the power of 'digits'
        while(temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        // Check if sum equals the number
        if(sum == number) {
            cout << number << " ";
        }
    }

    cout << endl;
    return 0;
}
