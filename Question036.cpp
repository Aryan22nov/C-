#include <iostream>
using namespace std;

/*
Question 36:
Write a program to check whether two given numbers are co-prime numbers or not.
*/

int main() {
    int num1, num2, a, b;

    // Input two numbers from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Store original values
    a = num1;
    b = num2;

    // Using Euclidean algorithm to find HCF
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // If HCF is 1, numbers are co-prime
    if(a == 1) {
        cout << num1 << " and " << num2 << " are co-prime numbers." << endl;
    } else {
        cout << num1 << " and " << num2 << " are not co-prime numbers." << endl;
    }

    return 0;
}
