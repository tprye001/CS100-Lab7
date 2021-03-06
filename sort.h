#ifndef SORT_H
#define SORT_H

#include "container.h"

class Container;

class SortAlgorithm {
  public:
    virtual void sort(Container * c) = 0;
};

#endif
