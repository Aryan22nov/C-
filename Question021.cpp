#include <iostream>
using namespace std;

/*
Question 21:
Create a program that takes a number (1-7) as input and prints the corresponding day of the week.
*/

int main() {
    int dayNum;

    // Input number from user
    cout << "Enter a number (1-7): ";
    cin >> dayNum;

    // Determine day of the week
    switch(dayNum) {
        case 1: cout << "Day 1: Sunday" << endl; break;
        case 2: cout << "Day 2: Monday" << endl; break;
        case 3: cout << "Day 3: Tuesday" << endl; break;
        case 4: cout << "Day 4: Wednesday" << endl; break;
        case 5: cout << "Day 5: Thursday" << endl; break;
        case 6: cout << "Day 6: Friday" << endl; break;
        case 7: cout << "Day 7: Saturday" << endl; break;
        default: cout << "Invalid input! Enter a number between 1 and 7." << endl;
    }

    return 0;
}
