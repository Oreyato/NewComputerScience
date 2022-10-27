#include "City.h"

City::City(std::string nameP, std::vector<Connection*> connectionsP):
	name{nameP},
	connections{connectionsP}
{
}

City::~City()
{
}

void City::getAllConnections()
{
}

void City::getConnectionToCity(std::string cityName)
{
}

void City::addConnection()
{
}
