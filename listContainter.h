#ifndef LISTCON_H
#define LISTCON_H

#include "container.h"
#include <list>
#include <iostream>
#include "sort.h"

class Container : listContainer{
  private:
    std::list<int> listCon;
    SortAlgorithm* sortAlg;
  public:
    listContainer(std::list<int> l) { listCon = l; }
    int at(int i); //which returns the element at index i
    void swap(int i, int j); //which swaps the elements at index i and index j
    void insert(int element); //which inserts an int element to the end of the container
    void print(); //which prints every element in order
    int size(); //which prints the number of elements in the container
    void set_sort(SortAlgorithm* s); //which sets a private member variable of type SortAlgorithm*
    void sort(); //which calls the SortAlgorithm’s sort function
};

int listContainer::at(int i) {/* which returns the element at index i*/
  std::list<int>::iterator it = listCon.begin();
  if( i > listCon.size()){
    return -1;
  }
  for(unsigned c = 0; c <= i; c++){
    it++;
  }
  return *it;
}

void listContainer::swap(int i, int j) { /*which swaps the elements at index i and index j*/
  if( i > listCon.size() || j > listCon.size()){
    return;
  }
  std::list<int>::iterator it1 = listCon.begin();
  for (unsigned c = 0; c <= i; c++){
    it1++;
  }
  std::list<int>::iterator it2 = listCon.begin();
  for (unsigned c = 0; c <= j; c++){
    it2++;
  }
  std::swap(*it1, *it2);
  return;
}

void listContainer::insert(int element) { /*which inserts an int element to the end of the container*/
  listCon.push_back(element);
  return;
}

void listContainer::print() { /*which prints every element in order*/
  std::list<int>::iterator it = listCon.begin();
  for(unsigned c = 0; c < listCon.size(); c++){
    std::cout << *it << " ";
    it++;
  }
  std::cout << std::endl;
  return;
}
int listContainer::size() {/* which prints the number of elements in the container*/
  return listCon.size();
}

void listContainer::set_sort(SortAlgorithm* s) { /* which sets a private member variable of type SortAlgorithm* */
 sortAlg = s;
 return;
}
void listContainer::sort() { /*which calls the SortAlgorithm’s sort function */
  sortAlg->sort(this);
  return;
}
#endif
