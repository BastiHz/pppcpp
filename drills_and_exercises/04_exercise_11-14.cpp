// chapter 4, p. 129-130, exercise 11-14

#include <iostream>
#include <vector>


int main() {
    std::cout << "Enter the upper limit: ";
    int max;
    std::cin >> max;
    std::vector<bool> is_prime(max + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;
    std::vector<int> primes;
    for (int i = 2; i <= max; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i + i; j < max + 1; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int p : primes) {
        std::cout << p << "\n";
    }
    return 0;
}
