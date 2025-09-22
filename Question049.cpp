#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char ch;

    for (int i = 1; i <= n; i++) {          // Rows
        ch = 'A';
        for (int j = 1; j <= i; j++) {      // Letters per row
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
