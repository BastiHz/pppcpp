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
