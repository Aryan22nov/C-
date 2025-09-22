#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows
    for (int i = 1; i <= n; i++) {
        // spaces before numbers
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        // print numbers with a space for triangle shape
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}