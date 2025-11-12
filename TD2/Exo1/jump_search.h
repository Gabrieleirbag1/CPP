#include <stdio.h>
#include <vector>
#include <ostream>
#include "searching_algo.h"

#ifndef JUMP_SEARCH_H
#define JUMP_SEARCH_H

class JumpSearch : public SearchingAlgo {
    public:
    JumpSearch();
    int search(const std::vector<int> elements, int searchKey) override;
};

#endif