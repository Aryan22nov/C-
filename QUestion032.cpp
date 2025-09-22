#include <iostream>
using namespace std;

/*
Question 32:
Write a program to find the Nth term of the Fibonacci series.
*/

int main() {
    int N;
    long long first = 0, second = 1, nextTerm;

    // Input N from user
    cout << "Enter the term N: ";
    cin >> N;

    if(N <= 0) {
        cout << "Invalid input. N must be a positive integer." << endl;
    } else if(N == 1) {
        cout << "The 1st term of Fibonacci series is: 0" << endl;
    } else if(N == 2) {
        cout << "The 2nd term of Fibonacci series is: 1" << endl;
    } else {
        for(int i = 3; i <= N; i++) {
            nextTerm = first + second;
            first = second;
            second = nextTerm;
        }
        cout << "The " << N << "th term of Fibonacci series is: " << second << endl;
    }

    return 0;
}
