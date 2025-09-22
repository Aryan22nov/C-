#include <iostream>
using namespace std;

int main() {
    // Question: Input 3 characters and display their ASCII codes
    char ch1, ch2, ch3;

    // Input three characters from user
    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;
    cout << "Enter third character: ";
    cin >> ch3;

    // Output characters with their ASCII codes
    cout << "Character: " << ch1 << " | ASCII Code: " << int(ch1) << endl;
    cout << "Character: " << ch2 << " | ASCII Code: " << int(ch2) << endl;
    cout << "Character: " << ch3 << " | ASCII Code: " << int(ch3) << endl;

    return 0;
}
