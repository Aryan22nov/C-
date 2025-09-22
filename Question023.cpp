#include <iostream>
using namespace std;

/*
Question 23:
Write a program to calculate the sum of first N even natural numbers.
*/

int main() {
    int N, sum = 0;

    // Input N from user
    cout << "Enter a positive integer N: ";
    cin >> N;

    // Calculate sum of first N even numbers using loop
    for(int i = 1; i <= N; i++) {
        sum += 2 * i;  // 2, 4, 6, ...
    }

    // Output the sum
    cout << "Sum of first " << N << " even natural numbers is: " << sum << endl;

    return 0;
}
