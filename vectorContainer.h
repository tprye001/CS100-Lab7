#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H

#include "container.h"
#include <vector>
#include <iostream>

class vectorContainer {
  private:
    std::vector<int> vecCon;
    SortAlgorithm * sortAlg;
  public:
    vectorContainer ();
    vectorContainer (std::vector<int> v) : vecCon(v);
    int at (int i);
    void swap (int i, int j);
    void insert (int element);
    void print();
    int size();
    void set_sort(SortAlgortithm * s);
    void sort();
};

int vectorContainer::at (int i) {
  return v.at(i);
}

void vectorContainer::swap (int i, int j) {
  std::swap(v.at(i), v.at(j);
  return;
  }

void vectorContainer::insert (int element) {
  v.push_back(element);
  return;
}

void vectorContainer::print() {
  for (unsigned int c; c < v.size(); c++) 
  std::cout << v.at(c) << ' ';
  std::cout << endl;
}

int vectorContainer::size() {
  return v.size();
}

void vectorContainer::set_sort(SortAlgorithm * s) {
  this->sortAlg = s;
  return;
}

void vectorContainer::sort() {
  sortAlg->sort(this);
  return;
}

#endif
