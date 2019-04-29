//
// Created by Stucki, Logan K. (Student) on 4/23/19.
//

#include "City.h"
#include <cmath>
#include <iostream>
#include <math.h>


City::City() {
    lat = 0;
    lng = 0;
}

City::City(std::string cty, std::string cntry, double lt, double lg) {
    city = cty;
    country = cntry;
    lat = lt;
    lng = lg;
}

bool City::matches(std::string cityName) {
    std::string cit = city;
    std::transform(cit.begin(), cit.end(), cit.begin(), ::tolower);
    std::transform(cityName.begin(), cityName.end(), cityName.begin(), ::tolower);

    return cit == cityName;
}

double City::dist(City &cit) {
    double dlng = cit.lng - lng;
    double dlat = cit.lat - lat;
    double a = pow(sin(dlat/2 * M_PI/180), 2) + cos(lat * M_PI/180) * cos(cit.lat * M_PI/180) * pow(sin(dlng/2 * M_PI/180), 2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    return c * 3963;
}

const std::string &City::getCity() const {
    return city;
}

const std::string &City::getCountry() const {
    return country;
}
