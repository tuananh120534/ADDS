#pragma once
#include "Sort.h"
#include <vector>

class QuickSort:public Sort{
public:
    QuickSort();
    std::vector<int> sort(std::vector<int> list) override;
};