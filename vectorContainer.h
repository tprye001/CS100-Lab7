#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H

#include "container.h"
#include <vector>
#include <iostream>
#include "sort.h"

class vectorContainer : public Container {
  private:
    std::vector<int> vecCon;
    SortAlgorithm * sortAlg;
  public:
    vectorContainer ();
    vectorContainer (std::vector<int> v) : vecCon(v) {}
    int & at (int i);
    void swap (int i, int j);
    void insert (int element);
    void print();
    int size();
    void set_sort(SortAlgorithm * s);
    void sort();
};

int & vectorContainer::at (int i) {
  return vecCon.at(i);
}

void vectorContainer::swap (int i, int j) {
  std::swap(vecCon.at(i), vecCon.at(j));
  return;
  }

void vectorContainer::insert (int element) {
  vecCon.push_back(element);
  return;
}

void vectorContainer::print() {
  for (unsigned int c; c < vecCon.size(); c++) 
  std::cout << vecCon.at(c) << ' ';
  std::cout << std::endl;
}

int vectorContainer::size() {
  return vecCon.size();
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
