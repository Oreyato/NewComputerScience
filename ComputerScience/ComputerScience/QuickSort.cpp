#include "QuickSort.h"
#include <iostream>

QuickSort::~QuickSort()
{
}

/**
 * Move datas in a vector
 *
 * @param vectorP: vector reference
 * @param fromIndexP: index of the pivot
 * @param toIndexP: index of the value greater than the pivot
 * @return void
 */
void QuickSort::move(std::vector<float>& vectorP, int fromIndexP, int toIndexP)
{
	// Get all three values
	float fromValue = vectorP[fromIndexP];
	float fromMinusOneIndexValue = vectorP[fromIndexP - 1];
	float toValue = vectorP[toIndexP];

	// Set the right values at the right position
	vectorP[toIndexP] = fromMinusOneIndexValue;
	vectorP[fromIndexP] = toValue;
	vectorP[fromIndexP - 1] = fromValue;
}

std::vector<std::vector<float>> QuickSort::partition(std::vector<float> vectorP, int pivotIndexP) {
	// Set a new pivot index variable
	int pivotIndex = pivotIndexP;
	// Get pivot's value
	float pivotValue = vectorP[pivotIndex];

	// Browse the list
	for (int i = 0; i < vectorP.size(); i++)
	{
		if (pivotValue < vectorP[i]) {
			move(vectorP, pivotIndex, i);
			pivotIndex--;
		}
	}

	// Initialise the final vector
	std::vector<std::vector<float>> outputVector;

	// If at least one value has been moved 
	if (pivotIndex < pivotIndexP) {
		// Split the vector in two distinct ones
		// Init the two vectors
		std::vector<float> leftList;
		std::vector<float> rightList;
		// Populate the vectors
		for (int i = 0; i < pivotIndex; i++)
		{
			leftList.push_back(vectorP[i]);
		}
		for (int i = pivotIndex; i < vectorP.size(); i++)
		{
			rightList.push_back(vectorP[i]);
		}
		// Put them in the final vector
		outputVector.push_back(leftList);
		outputVector.push_back(rightList);
	}
	// Otherwise, just add the initial vector in the output one
	else {
		outputVector.push_back(vectorP);
	}	

	return outputVector;
}

std::vector<float> QuickSort::sortVector(std::vector<float> vectorP, int pivotIndexP)
{
	// Get pivot's value
	float pivotValue = vectorP[pivotIndexP];
	std::cout << "Pivot value: " << pivotValue << std::endl;

	std::vector<std::vector<float>> firstPartition = partition(vectorP, pivotIndexP);

	//v Merge vectors from partitions ================================
	// Init output vector
	std::vector<float> outputVector;
	
	for (int i = 0; i < firstPartition.size(); i++)
	{
		for (int j = 0; j < firstPartition[i].size(); j++) {
			outputVector.push_back(firstPartition[i][j]);
		}
	}

	return outputVector;
}
