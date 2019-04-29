//
// Created by Stucki, Logan K. (Student) on 4/23/19.
//

#ifndef LOGAN_STUCKI_HW7_CITY_H
#define LOGAN_STUCKI_HW7_CITY_H


#include <string>

class City {
private:
    std::string city;
    std::string country;
    double lat;
    double lng;
public:
    City();
    City(std::string city, std::string country, double lat, double lng);
    const std::string &getCity() const;
    const std::string &getCountry() const;
    bool matches(std::string cityName);
    double dist(City& c);
};


#endif //LOGAN_STUCKI_HW7_CITY_H
