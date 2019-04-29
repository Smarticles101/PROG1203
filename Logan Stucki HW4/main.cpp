#include <iostream>
#include "Phrase.h"

int main() {
    while (true) {
        std::string str;
        int choice;
        std::cout << "Enter string :: ";
        std::getline(std::cin, str);
        Phrase phrase = Phrase(str);

        while (true) {
            std::cout << std::endl;

            std::cout << " 1 : Reverse string" << std::endl;
            std::cout << " 2 : Sort words in string" << std::endl;
            std::cout << " 3 : Rot-13 cipher on string" << std::endl;
            std::cout << " 4 : Translate string to pig latin" << std::endl;
            std::cout << " 5 : Enter another word" << std::endl;
            std::cout << " 6 : Exit" << std::endl;
            std::cout << "   :: ";

            std::cin >> choice;

            // get rid of invalid characters
            if(!std::cin) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            std::cout << std::endl;

            if (choice == 1) {
                std::cout << "Reversed :: " << phrase.reverse().get() << std::endl;
            } else if (choice == 2) {
                std::cout << "Sorted :: " << phrase.sort().get() << std::endl;
            } else if (choice == 3) {
                std::cout << "Rot-13 cipher :: " << phrase.ROT13().get() << std::endl;
            } else if (choice == 4) {
                std::cout << "Pig latin :: " << phrase.pigLatin().get() << std::endl;
            } else if (choice == 5) {
                // eat extra newline
                std::getline(std::cin, str);
                break;
            } else if (choice == 6) {
                return 0;
            }
        }
    }
}
