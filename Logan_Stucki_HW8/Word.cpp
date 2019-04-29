//
// Created by Stucki, Logan K. (Student) on 4/29/19.
//

#include "Word.h"
#include <regex>
#include <iostream>

Word::Word() {

}

Word::Word(std::string n, int line) {
    cleanWord(n);

    word = n;
    lines.push_back(line);
}

bool Word::add(std::string n, int line) {
    cleanWord(n);

    if ((n == word) == 1) {
        lines.push_back(line);

        return true;
    }

    return false;
}

void cleanWord(std::string& n) {
    std::transform(n.begin(), n.end(), n.begin(), ::tolower);

    std::regex reg("^[^a-z]+");

    n = regex_replace(n, reg, "");

    reg = std::regex("[^a-z]+$");
    n = regex_replace(n, reg, "");
}

std::string Word::toString() {
    std::string out = word + "(" + std::to_string(lines.size()) + ")" + ": ";

    for (int i = 0 ; i < lines.size(); i++) {
        out += std::to_string(lines[i]);

        if (i < lines.size() - 1) {
            out += ", ";
        }
    }

    return out;
}

int Word::count() {
    return lines.size();
}