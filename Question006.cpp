#include <iostream>
using namespace std;

int main() {
    // Question: Input a character and print its ASCII code
    char ch;

    // Input character from user
    cout << "Enter a character: ";
    cin >> ch;

    // Output ASCII code
    cout << "ASCII code of '" << ch << "' is: " << int(ch) << endl;

    return 0;
}
