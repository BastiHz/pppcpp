// chapter 4, p. 128, exercise 4
// I know that the wording of the exercise calls for a slightly different
// solution but I find this more interesting.

#include <iostream>


int main() {
    int lower_limit = 1;
    int upper_limit = 100;
    std::cout << "Enter a number between " << lower_limit <<
            " and " << upper_limit << ": ";
    int num;
    std::cin >> num;
    while (num < lower_limit || num > upper_limit) {
        std::cout << num << " is not between " << lower_limit <<
                " and " << upper_limit << ". Try again: ";
        std::cin >> num;
    }

    std::cout << "I am going guess your number with no more than seven" <<
            " questions. Answer with '=' if my guess is " <<
            "correct, '<' if your number is less than my guess, " <<
            "or '>' if it is greater than my guess.\n";

    int guess = -1;
    char answer;
    int max_questions = 7;  // only valid if the number range is 100.
    int num_tries = 0;
    bool correct = false;
    while (!correct && num_tries <= max_questions) {
        num_tries++;
        guess = (upper_limit + lower_limit) / 2;
        std::cout << "Is your number " << guess << "? ";
        std::cin >> answer;
        switch (answer) {
            case '=':
                correct = true;
                std::cout << "Nice. It took me " << num_tries << " tries.\n";
                break;
            case '<':
                upper_limit = guess;
                break;
            case '>':
                lower_limit = guess;
                break;
        }
    }

    if (!correct) {
        std::cout << "I failed.\n";
    }

    return 0;
}
