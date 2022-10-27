#include "City.h"

City::City(std::string nameP, std::vector<Connection*> connectionsP):
	name{nameP},
	connections{connectionsP}
{
}

City::~City()
{
}

Connection* City::getConnectionToCity(City targetCityP)
{
	std::string targetCityName = targetCityP.getName();

	for (auto i = 0; i < connections.size(); i++) {
		if (connections[i]->getToCity() == targetCityName) {
			return connections[i];
		}
	}

	// SHOULD ADD SOMETHING TO HANDLE ERRORS IF THE CITY ISN'T LINKED TO THIS ONE
}

void City::addConnection(Connection* connectionP)
{
	connections.push_back(connectionP);
}
