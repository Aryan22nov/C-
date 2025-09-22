#include <iostream>
using namespace std;

/*
Question 26:
Write a program to calculate the sum of cubes of first N natural numbers.
*/

int main() {
    int N;
    long long sum = 0;

    // Input N from user
    cout << "Enter a positive integer N: ";
    cin >> N;

    // Calculate sum of cubes using loop
    for(int i = 1; i <= N; i++) {
        sum += i * i * i;
    }

    // Output the sum of cubes
    cout << "Sum of cubes of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}
