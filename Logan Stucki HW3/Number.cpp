#include <cmath>
#include <iostream>
#include "Number.h"

Number::Number(long n) : number(n) {}

long Number::get() {
    return number;
}

Number Number::stripZeros() {
    long n = 0;
    long x = 0;
    long t = number;

    // remove negative
    if (t < 0) t = -t;

    // mathematically remove all zeros
    while (t > 0) {
        int ld = t % 10;
        if (ld != 0) {
            x++;
        }

        n += ld * pow(10, x);

        t /= 10;
    }

    // add back negative
    if (number < 0) n = -n;

    return Number(n);
}

Number Number::reverse() {
    long t = number;
    long n = 0;

    // remove negative
    if (t < 0) t = -t;

    // mathematically reverse
    while (t > 0) {
        int ld = t % 10;
        n = (n * 10) + ld;
        t /= 10;
    }

    // add back negative
    if (number < 0) n = -n;

    return Number(n);
}
