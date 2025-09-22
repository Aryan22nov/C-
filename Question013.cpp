#include <iostream>
using namespace std;

int main() {
    // Question 13: Grade based on score
    int score;

    // Input score from user
    cout << "Enter student's score (0-100): ";
    cin >> score;

    // Determine grade based on score
    if(score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    }
    else if(score >= 80 && score < 90) {
        cout << "Grade: B" << endl;
    }
    else if(score >= 70 && score < 80) {
        cout << "Grade: C" << endl;
    }
    else if(score >= 60 && score < 70) {
        cout << "Grade: D" << endl;
    }
    else if(score >= 0 && score < 60) {
        cout << "Grade: F" << endl;
    }
    else {
        cout << "Invalid score entered." << endl;
    }

    return 0;
}
