#include "RecursiveBinarySearch.h"
#include<vector>

bool binarySearch(std::vector<int> list, int left, int right, int target){
    if(left<=right){
        int mid = left+(right-left)/2;
        if(list[mid]==target) return true;
        if(list[mid]<target) return binarySearch(list,mid+1,right,target);
        if(list[mid]>target) return binarySearch(list,left,mid-1,target);
    }
    return false;
}

bool RecursiveBinarySearch::search(std::vector<int> list, int target){
    bool res = binarySearch(list,0,list.size()-1,target);
    return res;
}