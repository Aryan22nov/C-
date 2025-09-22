#include <iostream>
using namespace std;

/*
Question 16:
Develop a program that converts a temperature from Fahrenheit to Celsius or vice versa based on user input. 
The user should specify the type of conversion.
*/

int main() {
    char choice;
    double temp, convertedTemp;

    // Ask user for type of conversion
    cout << "Enter 'F' to convert Celsius to Fahrenheit or 'C' to convert Fahrenheit to Celsius: ";
    cin >> choice;

    // Conditional conversion based on user choice
    if(choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        convertedTemp = (temp * 9/5) + 32;  // Celsius to Fahrenheit
        cout << temp << "°C = " << convertedTemp << "°F" << endl;
    }
    else if(choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        convertedTemp = (temp - 32) * 5/9;  // Fahrenheit to Celsius
        cout << temp << "°F = " << convertedTemp << "°C" << endl;
    }
    else {
        cout << "Invalid choice entered." << endl;
    }

    return 0;
}
