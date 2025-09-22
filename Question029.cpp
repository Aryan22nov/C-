#include <iostream>
using namespace std;

/*
Question 29:
Write a program to check whether a given number is a Prime number or not.
*/

int main() {
    int n;
    bool isPrime = true;

    // Input number from user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Handle numbers less than 2
    if(n <= 1) {
        isPrime = false;
    } else {
        // Check for factors from 2 to sqrt(n)
        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output result
    if(isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
