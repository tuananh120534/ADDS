#pragma once
#include "Sort.h"
#include <vector>

class BubbleSort:public Sort{
public:
    BubbleSort();
    std::vector<int> sort(std::vector<int> list) override;
};