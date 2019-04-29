#include <string>

class Phrase {
private:
    std::string phrase;
public:
    Phrase(std::string p);
    std::string get();
    Phrase reverse();
    Phrase sort();
    Phrase ROT13();
    Phrase pigLatin();
};

bool is_vowel(char c);
std::string pigLatinWord(std::string s);
std::vector<std::string> split(std::string s, std::string delimiter);
