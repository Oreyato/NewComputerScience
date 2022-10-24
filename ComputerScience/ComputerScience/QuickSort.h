#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

class QuickSort
{
public:
	QuickSort();
	~QuickSort();

	static void move(std::vector<float>& vectorP, int fromIndexP, int toIndexP);
	static std::vector<std::vector<float>> partition(std::vector<float> vectorP, int pivotIndexP);

	static std::vector<float> sortVector(std::vector<float> vectorP, int pivotIndexP);


private:
	float executionTime{ 0 }; // <--- we will have to remove the "static" if we really want to use this
};

#endif // QUICKSORT_H


