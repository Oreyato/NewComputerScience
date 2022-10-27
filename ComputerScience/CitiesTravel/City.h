#ifndef CITY_H
#define CITY_H

#include "Connection.h"

#include <vector>

class City
{
public:
	City(std::string nameP, std::vector<Connection*> connectionsP);
	~City();

	void setName(std::string nameP) { name = nameP; }
	std::string getName() { return name; }

	void getAllConnections();
	void getConnectionToCity(std::string cityName);
	void addConnection();

private:
	std::string name;

	std::vector<Connection*> connections;
};

#endif // CITY_H


