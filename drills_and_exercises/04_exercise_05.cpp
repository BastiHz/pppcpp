// chapter 4, p. 128, exercise 5


#include <iostream>


int main() {
    double a;
    double b;
    char f;  // "operator" would be better but is reserved
    double result;
    std::cout << "Enter two numbers and an operator (+, -, *, /) " <<
            "separated by spaces: ";
    std::cin >> a >> b >> f;
    switch (f) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            std::cout << "Unknown operator.\n";
            return(0);
    }
    std::cout << a << " " << f << " " << b << " = " << result << "\n";
    return 0;
}
