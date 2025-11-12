#include "binary_search.h"
#include <algorithm>

BinarySearch::BinarySearch() : SearchingAlgo()
{
}

int BinarySearch::search(std::vector<int> elements, int searchKey)
{
    numberComparisons = 0;
    unsigned int vecSize = elements.size();
    std::sort(elements.begin(), elements.end());
    int middleIndex = elements.size() / 2;
    
    for (unsigned int i = middleIndex; i < vecSize; i++)
    {
        numberComparisons++;
        int element = elements[i];
        if (element == searchKey) {
            return i;
        }
    }
    return -1;
}