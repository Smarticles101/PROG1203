#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

string noVowels(string s);
bool replace(string& str, const string& from, const string& to);
void replaceAll(string& str, const string& from, const string& to);

int main() {
    string word;

    cout << "Input word to remove vowels from :: ";
    getline(cin, word);

    cout << noVowels(word) << endl;

    return 0;
}

string noVowels(string s) {
    vector<string> vowels = {"A", "E", "I", "O", "U", "a", "e", "i", "o", "u"};

    for (int i = 0; i < vowels.size(); i++) {
        replaceAll(s, vowels[i], "");
    }

    return s;
}

void replaceAll(string& str, const string& from, const string& to) {
    while(replace(str, from, to)) {}
}

bool replace(string& str, const string& from, const string& to) {
    size_t start_pos = str.find(from);
    if (start_pos == string::npos)
        return false;

    str.replace(start_pos, from.length(), to);
    return true;
}