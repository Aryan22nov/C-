#include <iostream>
using namespace std;

int main() {
    // Question 9: Convert date format
    int day, month, year;
    char slash1, slash2;

    // Input date in DD/MM/YYYY format
    cout << "Enter date (DD/MM/YYYY): ";
    cin >> day >> slash1 >> month >> slash2 >> year;

    // Display date in required format
    cout << "Day – " << day << ", Month – " << month << ", Year – " << year << endl;

    return 0;
}
