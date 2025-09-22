#include <iostream>
using namespace std;

/*
Question 27:
Write a program to calculate factorial of a number.
*/

int main() {
    int n;
    long long factorial = 1;

    // Input number from user
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if(n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate factorial using loop
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Output factorial
        cout << "Factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}
