// chapter 4, p. 128, exercise 6


#include <iostream>
#include <vector>


int main() {
    std::cout << "Enter an integer between 0 and 9 as a number or a word " <<
            "(e.g. \"seven\").\n";
    std::vector<std::string> values_str = {"zero", "one", "two", "three",
            "four", "five", "six", "seven", "eight", "nine"};
    std::vector<std::string> values_int = {"0", "1", "2", "3", "4", "5", "6",
            "7", "8", "9"};
    std::string input;
    bool found;
    while (std::cin >> input) {
        found = false;
        for (std::vector<std::string>::size_type i = 0; i < values_str.size(); ++i) {
            if (values_str[i] == input) {
                found = true;
                std::cout << i << "\n";
                break;
            }
        }
        if (found) {
            continue;
        }
        for (std::vector<std::string>::size_type i = 0; i < values_int.size(); ++i) {
            if (values_int[i] == input) {
                std::cout << values_str[std::stoi(input)] << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << "Unrecognized input.\n";
        }
    }
    return 0;
}
