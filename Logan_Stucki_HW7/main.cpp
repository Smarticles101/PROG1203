#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include "City.h"

int main() {
    std::ifstream infile("worldcities.csv");
    std::vector<City> cities;
    std::string line;

    getline(infile, line);

    while (getline(infile, line)) {
        std::istringstream ss(line);
        std::string city, country, temp;
        double lat, lng;

        // get cities
        getline(ss, city, ',');
        getline(ss, country, ',');
        // get rid of weird first space
        country = country.substr(1);
        getline(ss, temp, ',');
        lat = std::stod(temp);
        getline(ss, temp, ',');
        lng = std::stod(temp);

        City c = City(city, country, lat, lng);

        cities.emplace_back(c);
    }

    std::cout << std::setw(3) << "ind" << std::setw(18) << "City" << ", " << std::setw(18) << "Country" << std::endl;

    for (int i = 0; i < cities.size(); i++) {
        City city = cities[i];
        std::cout << std::setw(3) << i << std::setw(18) << city.getCity() << ", " << std::setw(18) << city.getCountry() << std::endl;
    }

    City city;

    do {

        std::cout << std::endl;
        std::cout << "Chose a city by index or name :: ";

        std::string choice;
        getline(std::cin, choice);

        try {
            int i = std::stoi(choice);

            city = cities[i];
        } catch (std::invalid_argument &e) {
            for (auto& c : cities) {
                if (c.matches(choice)) {
                    city = c;
                }
            }
        }
    } while(city.getCity().empty());

    std::cout << std::endl;
    std::cout << "Closest cities to " << city.getCity() << ", " << city.getCountry() << std::endl;

    std::sort(cities.begin(), cities.end(),
              [&city](auto a, auto b)
              { return a.dist(city) < b.dist(city);});

    for (int i = 1; i <= 5; i++) {
        City cit = cities[i];
        std::cout << std::setw(3) << i << std::setw(18) << cit.getCity() << ", " << std::setw(18) << cit.getCountry() << " " << std::fixed << std::showpoint << std::setprecision(2) << std::setw(8) << cit.dist(city) << " mi" << std::endl;
    }

    return 0;
}