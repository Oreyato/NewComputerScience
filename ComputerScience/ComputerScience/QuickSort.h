#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

class QuickSort
{
public:
	QuickSort();
	~QuickSort();

	static std::vector<float> sortVector(std::vector<float> vectorP, int pivotIndexP);

private:
	float executionTime{ 0 };
};

#endif // QUICKSORT_H


