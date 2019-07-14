// chapter 4, p. 129, exercise 7


#include <iostream>
#include <vector>


int convert_num(std::string num) {
    std::vector<std::string> values_str = {"zero", "one", "two", "three",
            "four", "five", "six", "seven", "eight", "nine"};
    std::vector<std::string> values_int = {"0", "1", "2", "3", "4", "5", "6",
            "7", "8", "9"};
    for (std::vector<std::string>::size_type i = 0; i < values_str.size(); ++i) {
        if (values_str[i] == num) {
            return i;
        }
    }
    for (std::vector<std::string>::size_type i = 0; i < values_int.size(); ++i) {
        if (values_int[i] == num) {
            return i;
        }
    }
    std::cout << "Unrecognized input: " << num << "\n";
    return -1;
}


int main() {
    std::cout << "Enter two single-digit integers between 0 and 9 " <<
            "(either as numbers or words) and an operator (+, -, *, /) " <<
            "separated by spaces: ";
    std::string a_str;
    std::string b_str;
    char f;  // "operator" would be better but is reserved
    std::cin >> a_str >> b_str >> f;
    // double instead of int so that divison works correctly
    double a = convert_num(a_str);
    double b = convert_num(b_str);
    if (a == -1 || b == -1) {
        return 0;
    }

    double result;
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
