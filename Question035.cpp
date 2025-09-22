#include <iostream>
using namespace std;

/*
Question 35:
Write a program to calculate HCF (Highest Common Factor) of two numbers.
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

    // Using Euclidean algorithm
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // Output HCF
    cout << "HCF of " << num1 << " and " << num2 << " is: " << a << endl;

    return 0;
}
