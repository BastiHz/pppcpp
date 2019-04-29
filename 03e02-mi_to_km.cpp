#include <iostream>

int main() {
    double miles;
    std::cout << "Enter the miles to convert: ";
    std::cin >> miles;
    double km_per_mile = 1.609;
    double km = miles * km_per_mile;
    std::cout << km << " km\n";
}
