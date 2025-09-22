#include <iostream>
using namespace std;

/*
Question 22:
Write a program to calculate the sum of first N natural numbers.
*/

int main() {
    int N, sum = 0;

    // Input N from user
    cout << "Enter a positive integer N: ";
    cin >> N;

    // Calculate sum using loop
    for(int i = 1; i <= N; i++) {
        sum += i;
    }

    // Output the sum
    cout << "Sum of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}
