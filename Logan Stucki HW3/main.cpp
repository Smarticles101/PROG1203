#include <iostream>
#include "Number.h"

int main() {
    long num = 0;

    while (true) {
        // get input
        std::cout << "Input a number to remove zeros and reverse :: ";
        std::cin >> num;

        // handle input errors
        while(!std::cin) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid number :: ";
            std::cin >> num;
        }

        // stop when number is 0
        if (num == 0) break;

        std::cout << Number(num).stripZeros().reverse().get() << std::endl;
    }

    return 0;
}
