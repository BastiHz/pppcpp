// chapter 3, p. 86, exercise 6


#include <iostream>

int main() {
    int val1;
    int val2;
    int val3;
    std::cout << "Enter three integers separated by a space: ";
    std::cin >> val1 >> val2 >> val3;
    
    // I know I could just use sort but this is kinda fun.
    
    int min;
    int max;
    int middle;
    if (val1 < val2) {
        min = val1;
        max = val2;
    } else {
        min = val2;
        max = val1;
    }
    if (max < val3) {
        middle = max;
        max = val3;
    } else if (min < val3) {
        middle = val3;
    } else {
        middle = min;
        min = val3;
    }
    std::cout << min << ", " << middle << ", " << max << "\n";
}
