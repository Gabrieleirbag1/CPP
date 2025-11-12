#include "binary_search.h"
#include <algorithm>

BinarySearch::BinarySearch() : SearchingAlgo()
{
}

int BinarySearch::search(std::vector<int> elements, int searchKey)
{
    numberComparisons = 0;
    std::sort(elements.begin(), elements.end());
    
    int left = 0;
    int right = elements.size() - 1;
    
    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        numberComparisons++;
        
        if (elements[middle] == searchKey) {
            return middle;
        }
        
        numberComparisons++;
        if (elements[middle] < searchKey) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    
    return -1;
}