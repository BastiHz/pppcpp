// chapter 4, p. 128, exercise 4
// I know that the wording of the exercise calls for a slightly different
// solution but I find this more interesting.


#include <iostream>


int main() {
    int lower_limit = 1;
    int upper_limit = 100;
    std::cout << "Think of a number between " << lower_limit <<
            " and " << upper_limit << ". I am going guess your number with " <<
            "no more than seven questions. Answer with '=' if my guess is " <<
            "correct, '<' if your number is less than my guess, " <<
            "or '>' if it is greater than my guess.\n";

    int guess = -1;
    int previous_guess;
    char answer;
    int max_questions = 7;  // only valid if the number range is 100.
    int num_tries = 0;
    bool correct = false;
    while (!correct && num_tries <= max_questions) {
        num_tries++;
        previous_guess = guess;
        guess = (upper_limit + lower_limit) / 2;
        if (guess == previous_guess) {
            // Prevent infinite loop caused by integer division when
            // calculating the next guess and the secret number equals
            // the initial upper_limit.
            guess++;
        }
        if (num_tries <= max_questions) {
            std::cout << "Is your number " << guess << "? ";
        } else {
            std::cout << "Your number is " << guess << ". ";
        }
        std::cin >> answer;
        switch (answer) {
            case '=':
                correct = true;
                std::cout << "Nice.\n";
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
