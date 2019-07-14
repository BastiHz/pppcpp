// chapter 4, p. 129, exercise 8


#include <iostream>
#include <cmath>


int main() {
    int grains_current = 0;
    int grains_total = 0;
    constexpr int limit = 1000000000;
    for (int square = 1; square <= 64; ++square) {
        grains_current = pow(2, square);
        grains_total += grains_current;
        std::cout << "grains on square "<< square << ": " << grains_current <<
                "\ngrains on all squares: " << grains_total <<
                "\n-------\n";
        if (grains_total >= limit) {
            break;
        }
    }
    return 0;
}
