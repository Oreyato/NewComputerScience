#include "Cities.h"

Cities::Cities(std::vector<City> citiesP) :
	cities{ citiesP }
{
}

int Cities::getCityIndexFromName(std::string cityNameP)
{
	for (auto i = 0; i < cities.size(); i++) {
		if (cities[i].getName() == cityNameP) {
			return i;
		}
	}
}

City Cities::getCityFromName(std::string cityNameP)
{
	for (auto i = 0; i < cities.size(); i++) {
		if (cities[i].getName() == cityNameP) {
			return cities[i];
		}
	}
}
