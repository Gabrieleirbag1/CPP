#include <stdio.h>
#include <vector>
#include <ostream>

#ifndef SEARCHING_ALGO_H
#define SEARCHING_ALGO_H

class SearchingAlgo {
    public:
        SearchingAlgo();

        int numberComparisons;
        static int totalComparisons;
        static int totalSearch;
        static int averageComparaisons;

        virtual int search(const std::vector<int> elements, int searchKey) = 0;

        void displaySearchResults(std::ostream& os, int result, int target);
};

#endif