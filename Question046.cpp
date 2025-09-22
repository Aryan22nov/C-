#include <iostream>

int main() {
    int n = 7;
    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Logic to print the swastik pattern
            if (i == mid || j == mid || (i == 0 && j > mid) || (i == n - 1 && j < mid) || (j == 0 && i < mid) || (j == n - 1 && i > mid)) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}