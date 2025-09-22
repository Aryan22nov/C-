#include <iostream>

int main() {
    int height = 5;
    
    // Top part of the pattern
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "*";
        }
        for (int k = 0; k < 2 * (height - i - 1); k++) {
            std::cout << " ";
        }
        for (int l = 0; l <= i; l++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    
    // Middle part of the pattern
    for (int i = height - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            std::cout << "*";
        }
        for (int k = 0; k < 2 * (height - i - 1); k++) {
            std::cout << " ";
        }
        for (int l = 0; l <= i; l++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    
    return 0;
}