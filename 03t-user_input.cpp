// try this, chapter 3, p. 65


#include <iostream>

int main() {
    std::cout << "Please enter your first name and age in years separated by a space.\n";
    std::string first_name = "???";
    double age_years = 0;
    double age_months = 0;
    std::cin >> first_name;
    std::cin >> age_years;
    age_months = age_years * 12;
    std::cout << "Hello, " << first_name << " (age " << age_months << " months).\n";
}
