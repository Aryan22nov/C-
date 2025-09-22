// Q1. Write a C++ program to calculate average of three integers.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    double avg = (a + b + c) / 3.0;  // formula for average
    cout << "Average = " << avg << endl;

    return 0;
}
