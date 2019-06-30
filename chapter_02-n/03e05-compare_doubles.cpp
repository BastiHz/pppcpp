// exercise 5, chapter 3, p. 86


#include <iostream>

int main() {
    double val1;
    double val2;
    std::cout << "Enter two doubles separated by a space: ";
    std::cin >> val1 >> val2;
    double min;
    double max;
    if (val1 < val2) {
        min = val1;
        max = val2;
    } else {
        min = val2;
        max = val1;
    }
    double sum = val1 + val2;
    double diff = val1 - val2;
    double prod = val1 * val2;
    double ratio = val1 / val2;  // floating point division
    std::cout << "val1 = " << val1
              << "\nval2 = " << val2
              << "\nmin = " << min
              << "\nmax = " << max
              << "\nsum = " << sum
              << "\ndiff = " << diff
              << "\nprod = " << prod
              << "\nratio = " << ratio << "\n";
}
