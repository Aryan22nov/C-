#include <iostream>
using namespace std;

/*
Question 24:
Write a program to calculate the sum of first N odd natural numbers.
*/

int main() {
    int N, sum = 0;

    // Input N from user
    cout << "Enter a positive integer N: ";
    cin >> N;

    // Calculate sum of first N odd numbers using loop
    for(int i = 0; i < N; i++) {
        sum += (2 * i + 1);  // 1, 3, 5, ...
    }

    // Output the sum
    cout << "Sum of first " << N << " odd natural numbers is: " << sum << endl;

    return 0;
}
