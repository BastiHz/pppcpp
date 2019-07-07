// chapter 3, p. 83, drill


#include <iostream>

int main() {
    std::cout << "Enter the first name of the recipient: ";
    std::string recipient_name;
    std::cin >> recipient_name;
    std::cout << "Enter the age of the recipient: ";
    int recipient_age;
    std::cin >> recipient_age;
    if ((recipient_age < 0) | (recipient_age > 120)) {
        std::cout << "You're kidding!\n";
        return 0;
    }
    std::cout << "Enter the first name of a mutual friend: ";
    std::string friend_name;
    std::cin >> friend_name;
    std::cout << "Enter the sex of the mutual friend (m/f): ";
    char friend_sex = 0;
    std::cin >> friend_sex;
    std::string pronoun;
    if (friend_sex == 'm') {
        pronoun = "him";
    } else if (friend_sex == 'f') {
        pronoun = "her";
    }
    std::string letter = 
        "\nDear " + recipient_name + ",\n" +
        "you may wonder why I write you this letter instead of an e-mail. " +
        "Well, I'm learning C++ and one of the exercises is writing a " +
        "program that outputs this letter.\nBy the way, have you seen " + 
        friend_name + " lately? If you see " + pronoun + " please ask " + 
        pronoun + " to call me.\n"
        "I hear you just had a birthday and you are " + 
        std::to_string(recipient_age) + " years old. ";
    if (recipient_age < 12) {
        letter += "Next year you will be " + std::to_string(recipient_age + 1) + ".";
    } else if (recipient_age == 17) {
        letter += "Neyt year you will be able to vote.";
    } else if (recipient_age > 70) {
        letter += "I hope you are enjoying your retirement.";
    } else {
        letter += "Congratulations!";
    }
    letter += "\nYours sincerely,\n\nSebastian\n";
    std::cout << letter;
}
