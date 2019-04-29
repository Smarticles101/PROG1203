//
// Created by Stucki, Logan K. (Student) on 4/29/19.
//

#ifndef LOGAN_STUCKI_HW8_WORD_H
#define LOGAN_STUCKI_HW8_WORD_H

#include <string>
#include <vector>


class Word {
private:
    std::string word;
    std::vector<int> lines;
public:
    Word();
    Word(std::string n, int line);
    bool add(std::string n, int line);
    int count();
    std::string toString();
};

void cleanWord(std::string& n);

#endif //LOGAN_STUCKI_HW8_WORD_H
