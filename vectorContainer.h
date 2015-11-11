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
    void merge(int start, int end);
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

void vectorContainer::merge(int start, int end) {
  std::vector<int> ret;
  int mid = (start + end) / 2;
  int i = start;
  int j = mid;

  if (start > 0) {
    for (int c = 0; c < start; c++)
      ret.pushback(vecCon.at(c));
  }

  while (i < mid && j <= end) {

        if (vecCon.at(i) < vecCon.at(j)) {
          ret.push_back(vecCon.at(i));
          i++;
        }
        else {
          ret.push_back(vecCon.at(j));
          j++;
        }
        if ( j > end) {
          while (i < mid) {
            ret.push_back(vecoCon.at(i));
            i++;
          }
        }
        if (i >= mid) {
          while (j <= end) {
            ret.push_back(vecoCon.at(j));
            j++;
          }
        }
      }

      for (int c = end+1; c < vecCon.size(); c++) {
        ret.push_back(vecCon.at(c));
      }
  vecCon = ret;
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
