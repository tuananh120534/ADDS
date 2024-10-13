#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <cmath>

template <typename T>
class Heap {
 private:
  std::vector<T> values;
  void heapify(int);

 public:
  Heap();


  Heap(std::vector<T>);

  void insert(T);
  void remove(T);
  T getMin();
};


template <typename T>
Heap<T>::Heap() {}


template <typename T>
Heap<T>::Heap(std::vector<T> start_values) {

  for (int i = 0; i < start_values.size(); i++) {
    values.push_back(start_values.at(i));
  }

  int initial_parent_index = floor(values.size() / 2) - 1;
  for (int parent_index = initial_parent_index; parent_index >= 0;
       parent_index--) {
    heapify(parent_index);
  }
}


template <typename T>
void Heap<T>::insert(T value) {

  values.push_back(value);
  int idx = values.size()-1;
  while (idx > 0 && values[(idx - 1) / 2] >= values[idx])
  {
    int parIdx = (idx - 1) / 2;
    std::swap(values[idx], values[parIdx]);
    idx = parIdx;
  }
}


template <typename T>
void Heap<T>::remove(T value) {

  if(std::find(values.begin(), values.end(),value)!=values.end()){
    int idx = std::find(values.begin(), values.end(),value) - values.begin();
    std::swap(values[idx], values.back());
    values.pop_back();
    heapify(idx);
  }
  return;
}


template <typename T>
T Heap<T>::getMin() {

  return values[0];
}
template <typename T>
void Heap<T>::heapify(int parent_index) {
  if (parent_index < 0 || parent_index >= values.size()) return;
  int left_child_index = parent_index * 2 + 1;
  int right_child_index = parent_index * 2 + 2;
  int index_of_smallest = parent_index;
  if (left_child_index < values.size() &&
      values.at(left_child_index) < values.at(index_of_smallest)) {
    index_of_smallest = left_child_index;
  }
  if (right_child_index < values.size() &&
      values.at(right_child_index) < values.at(index_of_smallest)) {
    index_of_smallest = right_child_index;
  }

  if (index_of_smallest != parent_index) {
    T temp = values.at(parent_index);
    values.at(parent_index) = values.at(index_of_smallest);
    values.at(index_of_smallest) = temp;
  }
  heapify(floor(parent_index / 2) - 1);
}

#endif