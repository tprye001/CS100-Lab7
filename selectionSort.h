#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "listContainter.h"
#include "vectorContainer.h"
#include "container.h"
#include "sort.h"

class SelectionSortAlgorithm {
  private:
    
  public:
    void sort(Container* c);
};

void SelectionSortAlgorithm::sort(Container *c){
  unsigned min = 0;
  for(unsigned i = 0; i < c.size() - 1; i++){
    min = j;
    for(unsigned j = i + 1; j < c.size(); j++){
      if(c.at(j) < c.at(min){
        min = j;
      }
      if(min != i) {
        swap(c.at(i), c.at(min));
      }
    }
  }
  return;
}
#endif
