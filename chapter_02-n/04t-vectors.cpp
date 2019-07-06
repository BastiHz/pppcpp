// chapter 4, p. 125, try this


#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<std::string> disliked = {"foo", "bar", "baz"};
    std::vector<std::string> words;
    for (std::string temp; std::cin >> temp; ) {
        words.push_back(temp);
    }
    std::cout << "Number of words: " << words.size() << "\n";

    // Unlike written in the book, one-parameter sort is not yet available
    // in C++. See https://stackoverflow.com/a/24070670
    std::sort(words.begin(), words.end());

    // If I use the version from the book then I get a warning or error
    // because int i is a signed integer and vector.size() returns an
    // unsigned integer. See https://stackoverflow.com/a/7985121
    for (std::size_t i = 0; i < words.size(); ++i) {
        if (i == 0 || words[i-1] != words[i]) {
            if(std::find(disliked.begin(), disliked.end(), words[i]) != disliked.end()) {
                // see https://stackoverflow.com/a/3450906
                // and https://en.cppreference.com/w/cpp/algorithm/find
                std::cout << "BEEP\n";
            } else {
            std::cout << words[i] << "\n";
            }
        }
    }
    return 0;
}
