// exercise 8, chapter 3, p. 86


#include <iostream>

int main() {
    int value;
    std::cout << "Enter an integer: ";
    std::cin >> value;
    if (value % 2 == 0) {
        std::cout << value << " is even\n";
    } else {
        std::cout << value << " is odd\n";
    }
}
