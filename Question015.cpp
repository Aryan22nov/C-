#include <iostream>
using namespace std;

int main() {
    // Question 15: Determine type of triangle
    double side1, side2, side3;

    // Input the lengths of three sides
    cout << "Enter length of first side: ";
    cin >> side1;
    cout << "Enter length of second side: ";
    cin >> side2;
    cout << "Enter length of third side: ";
    cin >> side3;

    // Check if the sides can form a triangle
    if(side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        // Determine type of triangle
        if(side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        }
        else if(side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is Isosceles." << endl;
        }
        else {
            cout << "The triangle is Scalene." << endl;
        }
    } else {
        cout << "The given sides do not form a triangle." << endl;
    }

    return 0;
}
