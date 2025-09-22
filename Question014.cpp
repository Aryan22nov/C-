#include <iostream>
using namespace std;

int main() {
    // Question 14: Check divisibility
    int num1, num2;

    // Input two integers from user
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Check if the second integer is zero to avoid division by zero
    if(num2 == 0) {
        cout << "Division by zero is not allowed." << endl;
    }
    else {
        // Check divisibility
        if(num1 % num2 == 0) {
            cout << num1 << " is divisible by " << num2 << "." << endl;
        } else {
            cout << num1 << " is not divisible by " << num2 << "." << endl;
        }
    }

    return 0;
}
