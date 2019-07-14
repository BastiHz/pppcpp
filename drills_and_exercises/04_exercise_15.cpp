// chapter 4, p. 130, exercise 15
// Using the algorithm suggested in 10 because the sieve is more complicated
// in this case.

#include <iostream>
#include <vector>


int main() {
    std::cout << "Enter the number of primes to find: ";
    std::vector<int>::size_type n;
    std::cin >> n;
    std::vector<int> primes = {2};
    int i = 2;
    bool is_prime;
    while (true) {
        i++;
        is_prime = true;
        for (int p : primes) {
            if (i % p == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(i);
            if (primes.size() == n) {
                break;
            }
        }
    }
    for (int p : primes) {
        std::cout << p << "\n";
    }
    return 0;
}
