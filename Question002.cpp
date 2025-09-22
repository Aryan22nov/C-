// Q2. Write a C++ program to calculate the circumference of a circle.
// Formula: Circumference = 2 * π * r

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    double circumference = 2 * M_PI * r;  // M_PI = 3.14159...
    cout << "Circumference = " << circumference << endl;

    return 0;
}
