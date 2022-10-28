#ifndef CITIES_H
#define CITIES_H

#include "City.h"

class Cities
{
public:
	Cities(std::vector<City> citiesP);
	~Cities() = default;

	void setCities(std::vector<City> citiesP) { cities = citiesP; }
	std::vector<City> getCities() { return cities; }

	int getCityIndexFromName(std::string cityNameP);
	City getCityFromName(std::string cityNameP);

private:
	std::vector<City> cities;

};

#endif // CITIES_H