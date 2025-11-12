#include "jump_search.h"
#include <algorithm>
#include <cmath>
#include<iostream>


JumpSearch::JumpSearch() : SearchingAlgo()
{
}

int JumpSearch::search(std::vector<int> elements, int searchKey)
{
    numberComparisons = 0;
    std::sort(elements.begin(), elements.end());

    int n = sqrt(elements.size());
    int elementsProcessed = 0;
    unsigned int i = 0;
    while (elementsProcessed < elements.size())
    {
        int max_processed_elements = elementsProcessed;
        for (i; i < n + max_processed_elements; i++)
        {
            numberComparisons++;

            if (elements[i] == searchKey)
            {
                return i;
            }
            elementsProcessed++;
        }
    }

    return -1;
}