#include <vector>

class LargeInt {
private:
    std::vector<int> num;
public:
    LargeInt(std::vector<int> n);
    LargeInt(std::string n);
    LargeInt add(LargeInt n);
    std::string toString();
    std::vector<int> toVector();
};
