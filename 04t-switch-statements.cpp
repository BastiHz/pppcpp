// try this, chapter 4, p. 109


#include <iostream>

int main() {
    // Convert different currencies into us-dollars.
    constexpr double yen_per_dollar = 108.56;
    constexpr double pounds_per_dollar = 0.79;
    constexpr double krona_per_dollar = 9.49;  // swedish krona
    constexpr double yuan_per_dollar = 6.93;
    double amount;
    char currency;
    double result;
    
    std::cout << "Enter an amount followed by a currency ('y', 'k', 'p', 'u'): ";
    // Use symbol 'u' for yuan because 'y' is taken by yen.
    std::cin >> amount >> currency;
    
    switch (currency) {
        case 'y':
            result = amount / yen_per_dollar;
            break;
        case 'k':
            result = amount / krona_per_dollar;
            break;
        case 'p':
            result = amount / pounds_per_dollar;
            break;
        case 'u':
            result = amount / yuan_per_dollar;
            break;
        default:
            std::cout << "I don't know what '" << currency << "' is.\n";
            return 0;
    }
    std::cout << amount << " " << currency << " = " << result << " d\n";
}
