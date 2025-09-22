#include <iostream>
using namespace std;

/*
Question 37:
Write a program to print all prime numbers under 100.
*/

int main() {
    cout << "Prime numbers under 100 are: ";

    for(int num = 2; num < 100; num++) {
        bool isPrime = true;

        // Check if num is prime
        for(int i = 2; i*i <= num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
