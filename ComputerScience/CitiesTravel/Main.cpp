#include "City.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::vector;

vector<City> initGraph() {
	// Init vector
	vector<City> cities;

	//v A city =======================================================
	Connection* fromAToB = new Connection{"A", "B", 2.0f};
	Connection* fromAToC = new Connection{ "A", "C", 2.0f };
	vector<Connection*> connectionsFromA = { fromAToB, fromAToC };
	City cityA{ "A", connectionsFromA };
	// Add the city to the vector
	cities.push_back(cityA);

	//v B city =======================================================
	Connection* fromBToA = new Connection{ "B", "A", 2.0f };
	Connection* fromBToC = new Connection{ "B", "C", 3.0f };
	Connection* fromBToD = new Connection{ "B", "D", 3.0f };
	Connection* fromBToE = new Connection{ "B", "E", 1.0f };
	vector<Connection*> connectionsFromB = { fromBToA, fromBToC, fromBToD, fromBToE };
	City cityB{ "B", connectionsFromB };
	// Add the city to the vector
	cities.push_back(cityB);

	//v C city =======================================================
	Connection* fromCToA = new Connection{ "C", "A", 2.0f };
	Connection* fromCToB = new Connection{ "C", "B", 3.0f };
	Connection* fromCToD = new Connection{ "C", "D", 1.0f };
	Connection* fromCToE = new Connection{ "C", "E", 3.0f };
	vector<Connection*> connectionsFromC = { fromCToA, fromCToB, fromCToD, fromCToE };
	City cityC{ "C", connectionsFromC };
	// Add the city to the vector
	cities.push_back(cityC);

	//v D city =======================================================
	Connection* fromDToB = new Connection{ "D", "B", 3.0f };
	Connection* fromDToC = new Connection{ "D", "C", 1.0f };
	Connection* fromDToE = new Connection{ "D", "E", 3.0f };
	vector<Connection*> connectionsFromD = { fromDToB, fromDToC, fromDToE };
	City cityD{ "D", connectionsFromD };
	// Add the city to the vector
	cities.push_back(cityD);

	//v E city =======================================================
	Connection* fromEToB = new Connection{ "E", "B", 1.0f };
	Connection* fromEToC = new Connection{ "E", "C", 3.0f };
	Connection* fromEToD = new Connection{ "E", "D", 3.0f };
	vector<Connection*> connectionsFromE = { fromEToB, fromEToC, fromEToD };
	City cityE{ "E", connectionsFromE };
	// Add the city to the vector
	cities.push_back(cityE);

}

vector<string> path() {

}

float distanceFromPath() {

}

int main() {
	vector<City> cities = initGraph();

	return;
}