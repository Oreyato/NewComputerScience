#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

class QuickSort
{
public:
	QuickSort();
	~QuickSort();

	static void move(std::vector<float>& vectorP, int fromIndexP, int toIndexP);
	static int partition(std::vector<float>& vectorP, int minIndexP, int pivotIndexP);

	static void sortVector(std::vector<float>& vectorP, int minIndexP, int pivotIndexP);

private:
	float executionTime{ 0 }; // <--- we will have to remove the "static" if we really want to use this
};

#endif // QUICKSORT_H


