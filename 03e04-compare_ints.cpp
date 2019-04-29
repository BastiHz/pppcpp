#include <iostream>

int main() {
    int val1;
    int val2;
    std::cout << "Enter two integers separated by a space: ";
    std::cin >> val1 >> val2;
    int min;
    int max;
    if (val1 < val2) {
        min = val1;
        max = val2;
    } else {
        min = val2;
        max = val1;
    }
    int sum = val1 + val2;
    int diff = val1 - val2;
    int prod = val1 * val2;
    double ratio = val1 / val2;  // integer division
    std::cout << "val1 = " << val1
              << "\nval2 = " << val2
              << "\nmin = " << min
              << "\nmax = " << max
              << "\nsum = " << sum
              << "\ndiff = " << diff
              << "\nprod = " << prod
              << "\nratio = " << ratio << "\n";
}
