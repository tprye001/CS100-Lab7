#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "container.h"
#include "vectorContainer.h"
#include "listContainter.h"
#include "sort.h"


class BubbleSortAlgorithm : public SortAlgorithm{
  private:
  public:
    void sort (Container * c);
};

void BubbleSortAlgorithm::sort (Container * c) {
  int n = c.size();
  bool swapped = true;

  while (swapped) {
    swapped = false;
    for (int i = 1; i < n-1; i++) {
      if (c.at(i-1) > c.at(i)) {
        swap(i-1, i);
        swapped = true;
      }
    }
    n = n - 1;
  }
}

#endif
