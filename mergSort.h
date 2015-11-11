#ifndef MERGESORT_H
#define MERGESORT_H

#include "container.h"
#include "listContainter.h"
#include "vectorContainer.h"
#include <vector>

class MergeSortAlgorithm : public SortAlgorithm {
  private:
  public:
    void sort(Container * c);
};

void MergeSortAlgorithm::sort (Container * c) {
  mergeSortHelp(c, 0, c->size()-1);
  return;
}

void mergeSortHelp(Container * c, int start, int end) {
  if (end - start <= 1) return;

  mergeSortHelp(c, start, (start+end)/2);
  mergeSortHelp(c, ((start+end)/2)+1, end);

  merge(c, start, end);
  return;
}

void merge(Container * c, int start, int end) {
  int size = (start - end) + 1;
  int mid = ((start + end) / 2) + 1;

  std::vector<int> scratch(size);

  int i = start;
  int j = mid;

  for (int k = 0; k < size; k++) {
    if (c->at(i) < c->at(j)) {
      scratch.at(k) = c->at(i);
      i++;
    }
    else {
      scratch.at(k) = c->at(j);
      j++;
    }
    if(j > end) {
      while (i < mid) {
        k++;
        scratch.at(k) = c->at(i);
      }
    }
    else if (i >= mid) {
      while (j <= end) {
        k++;
        scratch.at(k) = c->at(i);
      }
    }
  }

  for (int n = 0; n < size; n++)
    c->at(start + n) = scratch.at(n);
}

#endif
