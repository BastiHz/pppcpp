// try this, chapter 4, p. 111


#include <iostream>

int main() {
    char c = 'a';
    while (c <= 'z') {
        std::cout << c << "\t" << int(c) << "\n";
        ++c;
    }
}
