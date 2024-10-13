#include <queue>
#include <vector>

int kth_largest(std::vector<int> values, int k)
{
    std::priority_queue<int> dq;
    for(int i=0;i<values.size();i++){
        dq.push(values[i]);
    }
    while(k!=1){
        dq.pop();
        k--;
    }
    return dq.top();
};