#include <iostream>
using namespace std;

/*
Question 39:
Write a program to find the next prime number of a given number.
*/

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int next = num + 1;

    // Find next prime number
    while(true) {
        bool isPrime = true;

        // Check if 'next' is prime
        for(int i = 2; i*i <= next; i++) {
            if(next % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << "Next prime number after " << num << " is: " << next << endl;
            break;
        }
        next++;
    }

    return 0;
}
