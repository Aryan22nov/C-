#include <iostream>
using namespace std;

/*
Question 38:
Write a program to print all prime numbers between two given numbers.
*/

int main() {
    int start, end;
    
    // Input range from user
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: ";

    for(int num = start; num <= end; num++) {
        if(num < 2) continue; // Skip numbers less than 2

        bool isPrime = true;
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
