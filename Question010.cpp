#include <iostream>
using namespace std;

int main() {
    // Question 10: Convert time format
    int hour, minute;
    char colon;

    // Input time in HH:MM format
    cout << "Enter time (HH:MM): ";
    cin >> hour >> colon >> minute;

    // Display time in desired format
    cout << "Hour – " << hour << ", Minute – " << minute << endl;

    return 0;
}
