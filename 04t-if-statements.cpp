#include <iostream>

int main() {
    // Convert different currencies into us-dollars.
    constexpr double yen_per_dollar = 108.56;
    constexpr double pounds_per_dollar = 0.79;
    constexpr double krona_per_dollar = 9.49;  // swedish krona
    double amount;
    char currency;
    double result;
    
    std::cout << "Enter an amount followed by a currency ('y', 'k', 'p'): ";
    std::cin >> amount >> currency;
    
    if (currency == 'y') {
        result = amount / yen_per_dollar;
    } else if (currency == 'k') {
        result = amount / krona_per_dollar;
    } else if (currency == 'p') {
        result = amount / pounds_per_dollar;
    } else {
        std::cout << "I don't know what '" << currency << "' is.\n";
        return 0;
    }
    std::cout << amount << " " << currency << " = " << result << " d\n";
}
