//
// Created by Stucki, Logan K. (Student) on 4/12/19.
//

#include <string>
#include <iostream>
#include "LargeInt.h"

LargeInt::LargeInt(std::vector<int> n) {
    num = n;
}

LargeInt::LargeInt(std::string n) {
    num = std::vector<int>(n.length());

    for (int i = 0; i < n.length() ; i++) {
        num[i] = std::stoi(n.substr(n.length() - i - 1, 1));
    }
}

std::string LargeInt::toString() {
    std::string str;

    for (int i = 0; i < num.size(); i++) {
        str = std::to_string(num[i]) + str;
    }

    return str;
}

std::vector<int> LargeInt::toVector() {
    return num;
}

LargeInt LargeInt::add(LargeInt n) {
    std::vector<int> num1 = num;
    std::vector<int> num2 = n.toVector();
    std::vector<int> newNum = std::vector<int>(std::max(num1.size(), num2.size()));

    for (int i = 0; i < num1.size() || i < num2.size(); i++) {
        int x = newNum[i];

        if (i < num1.size()) {
            x += num1[i];
        }

        if (i < num2.size()) {
            x += num2[i];
        }

        newNum[i] = x % 10;
        newNum[i+1] = x / 10;
    }

    return LargeInt(newNum);
}
