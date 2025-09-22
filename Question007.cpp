#include <iostream>
using namespace std;

int main() {
    // Question: Input an ASCII code and print its corresponding character
    int asciiCode;
    char character;

    // Input ASCII code from user
    cout << "Enter an ASCII code (0-127): ";
    cin >> asciiCode;

    // Convert ASCII code to character
    character = char(asciiCode);

    // Output the result
    cout << "The character for ASCII code " << asciiCode << " is: " << character << endl;

    return 0;
}
