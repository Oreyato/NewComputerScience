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

	std::vector<Connection*> getAllConnections() { return connections; }
	Connection* getConnectionToCity(City targetCityP);

	void addConnection(Connection* connectionP);

private:
	std::string name;

	std::vector<Connection*> connections;
};

#endif // CITY_H


