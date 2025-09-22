#include <iostream>
using namespace std;

int main() {
    // Question 4: Calculate Volume of a Cuboid
    double length, width, height, volume;

    // Input dimensions of cuboid
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    // Formula: Volume = length * width * height
    volume = length * width * height;

    // Output the result
    cout << "Volume of the cuboid is: " << volume << endl;

    return 0;
}
