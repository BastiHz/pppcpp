// chapter 4, p. 129, exercise 9


#include <iostream>
#include <cmath>
#include <math.h>


int main() {
//    int grains_current = 0;
//    int grains_total = 0;
     double grains_current = 0;
     double grains_total = 0;
    int square = 0;
    while (true) {
        square++;
        grains_current = pow(2, square);
        grains_total += grains_current;
        std::cout << "grains on square "<< square << ": " << grains_current <<
                "\ngrains on all squares: " << grains_total <<
                "\n-------\n";
        if (grains_total < 0 || isinf(grains_total)) {
            break;
        }
    }
    return 0;
}

// largest number of squares for an int: 30
// largest number of squares for a double: 1022 (approximate number of grains)
