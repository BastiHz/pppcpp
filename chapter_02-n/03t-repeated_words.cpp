// chapter 3, p. 73, try this


// Terminate this program with Ctrl + D.
// Test input:
// She she laughed He He He because what he did did not look very very good good.

#include <iostream>

int main() {
    int number_of_words = 0;
    std::string previous = " ";
    std::string current;
    std::cout << "Please enter some words:\n";
    while (std::cin >> current) {
        ++number_of_words;
        if (previous == current) {
            std::cout << "repeated word found: '" + current
                + "' at position " << number_of_words << ".\n";
        }
        previous = current;
    }
}
