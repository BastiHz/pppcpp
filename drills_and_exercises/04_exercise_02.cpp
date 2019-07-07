// chapter 4, p. 128, exercise 2


#include <iostream>
#include <vector>
#include <algorithm>


double median(std::vector<double> v) {
    std::sort(v.begin(), v.end());
    if (v.size() % 2 == 0) {
        return((v[v.size() / 2 - 1] + v[v.size() / 2]) / 2);
    } else {
        return(v[v.size() / 2]);
    }
}


int main() {
    std::vector<double> temps;
    for (double temp; std::cin >> temp; ) {
        temps.push_back(temp);
    }
    double sum = 0;
    for (double x : temps) {
        sum += x;
    }
    std::cout << "Average temperature: " << sum / temps.size() << "\n";
    std::cout << "Median temperature: " << median(temps) << "\n";
    return 0;
}
