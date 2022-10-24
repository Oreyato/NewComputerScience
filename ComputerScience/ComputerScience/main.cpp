#include <iostream>
#include "QuickSort.h"

using std::cout;
using std::endl;
using std::vector;

#include <stdio.h>
#include <stdlib.h>
#include <ctime>

float randomFloatGenerator(float fromValueP, float toValueP) {
	float nb = fromValueP + static_cast<float>(rand()) / static_cast<float>(RAND_MAX / (toValueP - fromValueP));

	return nb;
}

void initVector(vector<float>& vectorP, int vectorWantedSizeP, float minRandomValueP, float maxRandomValueP) {
	// Reserve memory slots
	vectorP.reserve(vectorWantedSizeP);

	// Populate the vector
	for (int i = 0; i < vectorWantedSizeP; i++)
	{
		float newValue = randomFloatGenerator(minRandomValueP, maxRandomValueP);
		vectorP.push_back(newValue);
	}
}

int main() {
	// Initialise randomness seed
	srand((unsigned)time(0));
	// Create the vector to sort
	vector<float> floatVector;
	// Initialise the vector's max size
	int maxSize = 10;
	// Initialise the value's range
	float range = 100.0f;
	// And initialise it
	initVector(floatVector, maxSize, -range, range);

	// Sort the vector
	vector<float> sortedVector = QuickSort::sortVector(floatVector, maxSize-1);

	// Print vector
	for (int i = 0; i < maxSize; i++)
	{
		cout << sortedVector[i] << " ";
	}

	return 0;
}