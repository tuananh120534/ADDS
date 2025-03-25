#include "BubbleSort.h"

#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list){
   int n = list.size();
   for(int i = n-1; i>=0; i--){
        for(int j = 0; j<i; j++){
            if(list[j]>list[j+1]) std::swap(list[j],list[j+1]);
        }
   }
   return list; 
}

BubbleSort::BubbleSort() {}