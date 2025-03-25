#include "QuickSort.h"

#include <vector>

void quickSort(std::vector<int>& list, int start, int end) {
    if(start >= end) {
        return;
    }
    int pivot = list[end];
    if(end-start>3){
        pivot = list[start+2];
        std::swap(list[end],list[start+2]);
    }
    int pivot_index = start; 
    for(int i = start; i < end; i++) {
        if (list[i] < pivot) {
            std::swap(list[pivot_index],list[i]);
            pivot_index++;
        }
    }
    std::swap(list[pivot_index],list[end]);
    quickSort(list, start, pivot_index - 1);
    quickSort(list, pivot_index + 1, end);
}


std::vector<int> QuickSort::sort(std::vector<int> list){
   quickSort(list,0,list.size()-1);
   return list; 
}

QuickSort::QuickSort() {}