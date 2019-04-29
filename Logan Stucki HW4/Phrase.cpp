//
// Created by Stucki, Logan K. (Student) on 3/1/19.
//

#include <vector>
#include "Phrase.h"

// constructor
Phrase::Phrase(std::string p) : phrase(p) {};

// get string
std::string Phrase::get() {
    return phrase;
}

Phrase Phrase::reverse() {
    std::string str = phrase;

    // string length
    unsigned long n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        std::swap(str[i], str[n - i - 1]);

    return Phrase(str);
}

// sort words in phrase
Phrase Phrase::sort() {
    std::string str = "";

    std::vector<std::string> v = split(phrase, " ");

    std::sort(v.begin(), v.end()); // sort words

    for (auto i : v) {
        str += i + " ";
    }

    return Phrase(str);
}

// rot 13 cipher
Phrase Phrase::ROT13() {
    std::string transformed;
    for (size_t i = 0; i < phrase.size(); ++i) {
        if (isalpha(phrase[i])) {
            if ((tolower(phrase[i]) - 'a') < 14)
                transformed.append(1, phrase[i] + 13);
            else
                transformed.append(1, phrase[i] - 13);
        } else {
            transformed.append(1, phrase[i]);
        }
    }
    return Phrase(transformed);
}

// convert phrase to pig latin
Phrase Phrase::pigLatin() {
    std::string str = "";

    std::vector<std::string> v = split (phrase, " ");

    for (auto i : v) {
        str += pigLatinWord(i) + " ";
    }

    return Phrase(str);
}

// split phrase
std::vector<std::string> split(std::string s, std::string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::string token;
    std::vector<std::string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != std::string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

// convert word to pig latin
std::string pigLatinWord(std::string s) {
    std::string str = s;

    if(is_vowel(str[0])) {
        return str.append("way");
    } else {
        bool upper = false;

        upper = isupper(str[0]);
        if (upper) {
            str[0] = tolower(str[0]);
        }

        str += str[0];
        str.erase(0, 1);

        if (upper) {
            str[0] = toupper(str[0]);
        }

        return str.append("ay");
    }
}

// test if char is vowel
bool is_vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
