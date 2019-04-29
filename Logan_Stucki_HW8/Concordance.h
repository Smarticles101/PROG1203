//
// Created by Stucki, Logan K. (Student) on 4/29/19.
//

#ifndef LOGAN_STUCKI_HW8_CONCORDANCE_H
#define LOGAN_STUCKI_HW8_CONCORDANCE_H

#include <vector>
#include <fstream>
#include <map>
#include "Word.h"

class Concordance {
private:
    std::map<std::string, Word> words;
public:
    Concordance(std::ifstream file);
    std::string toString();
};


#endif //LOGAN_STUCKI_HW8_CONCORDANCE_H
