// Solution to improve: 69%

#include <vector>
#include <iostream>

using std::vector;
using namespace std;

int solution(vector<int>& A) {
    // Initialise lSum and rSum
    int lSum = A[0];
    int rSum{ 0 };
    for (size_t i = 1; i < A.size(); i++) {
        rSum += A[i];
    }
    // Get the reference difference
    int difference = std::abs(lSum - rSum);

    // Browse the list
    for (size_t i = 1; i < A.size() - 1; i++)
    {
        lSum += A[i];
        rSum -= A[i];

        int tmpDiff = std::abs(lSum - rSum);

        if (tmpDiff < difference) {
            difference = tmpDiff;
        }
    }

    return difference;
}

int main() {
    vector<int> vector = { 2, 4, 6, 8, 3, 2 };

    std::cout << solution(vector) << std::endl;

    return 0;
}