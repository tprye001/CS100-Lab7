#ifndef MERGESORT_H
#define MERGESORT_H

#include "container.h"
#include "listContainter.h"
#include "vectorContainer.h"
#include <vector>

class MergeSortAlgorithm : public virtual SortAlgorithm {
  private:
  public:
    void sort(Container * c);
};

void merge(Container * c, int start, int end) {
  int size = (end - start) + 1;
  int mid = ((start + end) / 2) + 1;

  std::vector<int> scratch(0);

  int i = start;
  int j = mid;

  for (int k = 0; k < size; k++) {
    if (c->at(i) < c->at(j)) {
      scratch.push_back(c->at(i));
      i++;
    }
    else {
      scratch.push_back(c->at(j));
      j++;
    }
    if(j > end) {
      k++;
      while (i < mid) {
        scratch.push_back(c->at(i));
        i++;
        k++;
      }
    }
    else if (i >= mid) {
      k++;
      while (j <= end) {
        scratch.push_back(c->at(j));
        j++;
        k++;
      }
    }
  }

  for (int n = 0; n < size; n++)
    c->at(start + n) = scratch.at(n);
}

void mergeSortHelp(Container * c, int start, int end) {
  if (end - start <= 1) return;

  mergeSortHelp(c, start, (start+end)/2);
  mergeSortHelp(c, ((start+end)/2)+1, end);

  merge(c, start, end);
  return;
}

void MergeSortAlgorithm::sort (Container * c) {
  mergeSortHelp(c, 0, c->size()-1);
  return;
}

#endif
