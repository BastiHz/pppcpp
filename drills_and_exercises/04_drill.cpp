// chapter 4, p. 126, drill


#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    double value;
    std::vector<double> values;
    std::string unit;
    double smallest;
    double largest;
    std::vector<std::string> valid_units = {"cm", "m", "in", "ft"};
    double cm_to_m = 0.01;
    double in_to_m = 0.0254;
    double ft_to_m = 12 * 0.0254;
    double sum = 0;

    while (std::cin >> value >> unit) {
        if(std::find(valid_units.begin(), valid_units.end(), unit) == valid_units.end()) {
            // The unit is not in valid_units.
            std::cout << "Invalid unit! Use \"cm\", \"m\", \"in\" or \"ft\".\n";
            continue;
        }

        if (unit == "cm") {
            value *= cm_to_m;
        } else if (unit == "in") {
            value *= in_to_m;
        } else if (unit == "ft") {
            value *= ft_to_m;
        }
        sum += value;

        if (values.empty()) {
            smallest = largest = value;
        } else if (value < smallest) {
            smallest = value;
        } else if (value > largest) {
            largest = value;
        }
        values.push_back(value);
    }
    std::sort(values.begin(), values.end());
    std::cout << "values sorted and converted to meters: ";
    for (double x : values) {
        std::cout << x << ", ";
    }
    std::cout << "\n" << values.size() << " values entered\n"
            << "sum in m = " << sum << "\nsmallest in m = " << smallest
            << "\nlargest in m = " << largest << "\n";
    return 0;
}
