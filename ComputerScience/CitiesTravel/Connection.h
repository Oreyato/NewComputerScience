#ifndef CONNECTION_H
#define CONNECTION_H

#include <string>

class Connection
{
public:
	Connection(std::string fromCityP, std::string toCityP, float distanceP);
	~Connection() = default;

	void setFromCity(std::string fromCityP) { fromCity = fromCityP; }
	void setToCity(std::string toCityP) { toCity = toCityP; }
	void setDistance(float distanceP) { distance = distanceP; }

	std::string getFromCity() { return fromCity; }
	std::string getToCity() { return toCity; }
	float getDistance() { return distance; }

private:
	std::string fromCity;
	std::string toCity;

	float distance{ 0.0f };
};

#endif // CONNECTION_H



