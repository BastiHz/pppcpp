// chapter 4, p. 128, exercise 3


#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<double> distances;
    for (double dist; std::cin >> dist; ) {
        distances.push_back(dist);
    }
    double sum = 0;
    double smallest = distances[0];
    double largest = distances[0];
    for (double d : distances) {
        sum += d;
        if (d > largest) {
            largest = d;
        } else if (d < smallest) {
            smallest = d;
        }
    }

    std::cout << "Total distance: " << sum << "\n";
    std::cout << "Smallest distance: " << smallest << "\n";
    std::cout << "Largest distance: " << largest << "\n";
    std::cout << "Average distance: " << sum / distances.size() << "\n";
    return 0;
}
