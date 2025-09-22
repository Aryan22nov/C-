#include <iostream>
using namespace std;

/*
Question 34:
Write a program to check whether a given number is there in the Fibonacci series or not.
*/

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0) {
        cout << num << " is not in the Fibonacci series." << endl;
        return 0;
    }

    long long first = 0, second = 1, nextTerm = 0;
    bool found = false;

    // Check if the number exists in Fibonacci series
    while(nextTerm <= num) {
        if(nextTerm == num) {
            found = true;
            break;
        }
        nextTerm = first + second;
        first = second;
        second = nextTerm;
    }

    if(found) {
        cout << num << " is in the Fibonacci series." << endl;
    } else {
        cout << num << " is not in the Fibonacci series." << endl;
    }

    return 0;
}
