// try this, chapter 4, p. 116


#include <iostream>


int square(int x) {
    int result = 0;
    for (int i = 0; i < x; ++i) {
        result += x;
    }
    return result;
}


int main() {
    for (int i = 0; i < 100; ++i) {
        std::cout << i << "\t" << square(i) << "\n";
    }
}
