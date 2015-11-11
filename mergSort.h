#ifndef MERGESORT_H
#define MERGESORT_H

#include "container.h"
#include "listConainter.h"
#include "vectorContainer.h"

class MergeSortAlgorithm {
  private:
  public:
    void sort(Container * c);
};

void MergeSortAlgorithm::sort (Container * c) {
  mergeSortHelp(c, 0, c.size()-1);
  return;
}

void mergeSortHelp(Container * c, int start, int end) {
  if (end - start <= 1) return;

  mergeSortHelp(c, start, (start+end)/2);
  mergeSortHelp(c, ((start+end)/2)+1, end);

  c->merge(start, end);
  return;
}

#endif
