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

/**
 * Split the data by comparing values between a pivot and the rest of the data
 *
 * @param vectorP: vector reference
 * @param minIndexP: where to start in the vector
 * @param pivotIndexP: index of the pivot
 * @return new pivot's index
 */
int QuickSort::partition(std::vector<float>& vectorP, int minIndexP, int pivotIndexP) {
	// Prepare the returned pivot index
	int newPivotIndex = pivotIndexP;
	// Get pivot's value
	float pivotValue = vectorP[pivotIndexP];
	// Set maximum i
	int maxI = pivotIndexP - 1;
	// Set minimum i
	int minI = minIndexP - 1;

	// Browse the list
	for (int i = minIndexP; i <= maxI; i++)
	{
		// If the pivot's value is greater than the current element's value
		if (pivotValue > vectorP[i]) {
			move(vectorP, newPivotIndex, i);
			// Update the pivot index
			newPivotIndex--;
			// Update the lowest element index
			minI++;
		}
	}
	move(vectorP, minI + 1, pivotIndexP);

	return newPivotIndex + 1;
}

void QuickSort::sortVector(std::vector<float>& vectorP, int minIndexP, int pivotIndexP)
{
	// Compare indexes
	if (minIndexP < pivotIndexP) {
		// Get the pivot position after partitionning
		int newPivotIndex = partition(vectorP, minIndexP, pivotIndexP);
		// Sort the part at the pivot's left
		sortVector(vectorP, minIndexP, newPivotIndex - 1);
		// Sort the part at the pivot's right
		sortVector(vectorP, newPivotIndex + 1, pivotIndexP);

		// Print vector
		for (int i = 0; i < vectorP.size(); i++)
		{
			std::cout << vectorP[i] << " ";
		}
		std::cout << std::endl;
	}
}
