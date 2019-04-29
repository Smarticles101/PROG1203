#include <iostream>
#include <cmath>

using namespace std;

double getSide(string side);

int main() {
    // variables
    double a, b, c;
    bool right;

    std::cout << "Is your triangle a right triangle?"
              << std::endl << "You about to find out." << std::endl;

    // input
    a = getSide("a");
    b = getSide("b");
    c = getSide("c");

    cout << endl;

    // find largest side, store in c
    if (a > b && a > c) {
        double i = a;
        a = c;
        c = i;
    } else if (b > a && b > c) {
        double i = b;
        b = c;
        c = i;
    }

    right = a*a + b*b == c*c;
    cout << a*a << " " << b*b << " " << a*a + b*b << " " << c*c << endl;

    // output
    cout << a << "^2 + " << b << "^2 " << "= " << sqrt(a*a + b*b) << "^2" << endl << endl;
    cout << "According to what you inputted, " << c << " is the hypotenuse, so" << endl;
    cout << a << "^2 + " << b << "^2 " << (right ? "== " : "!= ") << c << "^2" << endl;
    cout << "In other words, it's" << (right ? "" : " not") << " a right triangle" << endl;

    return 0;
}

double getSide(string side) {
    double s;

    cout << "Input side " << side << " :: ";
    cin >> s;

    while(!cin && (s < 0.1 || s > 100)) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid side :: ";
        cin >> s;
    }

    return s;

}