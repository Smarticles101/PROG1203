#include <iostream>
#include "LargeInt.h"

int main() {
    LargeInt bignum1 = LargeInt("10000000000000000000000000000000000000000000000001");
    LargeInt bignum2 = LargeInt("9999999999999999999999999999999999999999999999999");
    LargeInt bignumsum = bignum1.add(bignum2);
    bool running = true;

    std::cout << "This program exhibits addition of very large unsigned integers." << std::endl;
    std::cout << "For example :" << std::endl;
    std::cout << bignum1.toString() << std::endl;
    std::cout << "+" << std::endl;
    std::cout << bignum2.toString() << std::endl;
    std::cout << "===" << std::endl;
    std::cout << bignumsum.toString() << std::endl;
    std::cout << std::endl;

    while (running) {
        std::cout << "Enter two numbers, or no to quit :: ";
        std::string num;
        std::string num2;
        std::cin >> num;

        if (num == "no") {
            running = false;
        } else {
            std::cin >> num2;

            try {
                std::cout << LargeInt(num).add(LargeInt(num2)).toString() << std::endl;
            } catch(std::invalid_argument e) {
                std::cout << "Invalid input" << std::endl;
            }
        }
    }

    return 0;
}
