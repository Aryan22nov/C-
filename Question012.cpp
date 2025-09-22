#include <iostream>
using namespace std;

int main() {
    // Question 12: Classify age groups
    int age;

    // Input age from user
    cout << "Enter your age: ";
    cin >> age;

    // Classify based on age
    if(age >= 0 && age <= 12) {
        cout << "You are a Child." << endl;
    }
    else if(age >= 13 && age <= 19) {
        cout << "You are a Teenager." << endl;
    }
    else if(age >= 20 && age <= 59) {
        cout << "You are an Adult." << endl;
    }
    else if(age >= 60) {
        cout << "You are a Senior." << endl;
    }
    else {
        cout << "Invalid age entered." << endl;
    }

    return 0;
}
