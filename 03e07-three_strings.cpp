#include <iostream>

int main() {
    std::string val1;
    std::string val2;
    std::string val3;
    std::cout << "Enter three strings separated by a space: ";
    std::cin >> val1 >> val2 >> val3;
    
    // I know I could just use sort but this is kinda fun.
    
    std::string min;
    std::string max;
    std::string middle;
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
    std::cout << min + ", " + middle + ", " + max + "\n";
}
