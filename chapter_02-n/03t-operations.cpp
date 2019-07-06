// chapter 3, p. 68, try this


#include <iostream>
#include <cmath>

int main() {
    std::cout << "Please enter an integer value: ";
    int n;
    std::cin >> n;
    std::cout << "n = " << n
         << "\nn + 1 = " << n + 1
         << "\nn * 3 = " << n * 3
         << "\nn * 2 = " << n + n
         << "\nn squared = " << n * n
         << "\nhalf of n = " << n / 2
         << "\nsquare root of n = " << sqrt(n)
         << "\nn modulo 2 = " << n % 2
         << "\n";
}
