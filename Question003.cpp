#include <iostream>
using namespace std;

int main() {
    // Question 3: Calculate Simple Interest
    double principal, rate, time, simpleInterest;

    // Input principal, rate, and time
    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest (in %): ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    // Formula: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Output the result
    cout << "Simple Interest is: " << simpleInterest << endl;

    return 0;
}
