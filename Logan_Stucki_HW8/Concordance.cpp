//
// Created by Stucki, Logan K. (Student) on 4/29/19.
//

#include "Concordance.h"
#include <istream>
#include <algorithm>
#include <sstream>

Concordance::Concordance(std::ifstream file) {
    std::string line;
    int lineNum = 1;

    while (getline(file, line)) {
        std::string str;
        std::istringstream ss(line);

        while (getline(ss, str, ' ')) {
            cleanWord(str);

            if (str == "") {
                continue;
            }

            if (!words.count(str)) {
                words[str] = Word(str, lineNum);
            } else {
                words[str].add(str, lineNum);
            }
        }

        lineNum++;
    }
}

std::string Concordance::toString() {
    /*std::sort(words.begin(), words.end(),
              [](auto a, auto b)
              { return a->second.count() > b->second.count();});*/

    std::string out = "";

    for (auto a : words) {
        out += (a.second).toString() + "\n";
    }

    return out;
}
