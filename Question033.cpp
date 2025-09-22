#include <iostream>
using namespace std;

/*
Question 33:
Write a program to print first N terms of Fibonacci series.
*/

int main() {
    int N;
    long long first = 0, second = 1, nextTerm;

    // Input N from user
    cout << "Enter the number of terms N: ";
    cin >> N;

    if(N <= 0) {
        cout << "Invalid input. N must be a positive integer." << endl;
    } else {
        cout << "First " << N << " terms of Fibonacci series: ";

        for(int i = 1; i <= N; i++) {
            if(i == 1) {
                cout << first << " ";
            } else if(i == 2) {
                cout << second << " ";
            } else {
                nextTerm = first + second;
                cout << nextTerm << " ";
                first = second;
                second = nextTerm;
            }
        }
        cout << endl;
    }

    return 0;
}
