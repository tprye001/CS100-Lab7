#ifndef CONTAINER_H
#define CONTAINER_H

class SortAlgorithm;

class Container {
  private:
    SortAlgortihm * s;
  public:
    virtual int at (int i) = 0;
    virtual void swap(int i, int j) = 0;
    virtual void insert (int element) = 0;
    virtual void print () = 0;
    virtual int size() = 0;
    virtual void merge(int s1, int s2) = 0;
    virtual void set_sort(SortAlgorithm* s) = 0;
    virtual void sort () = 0;
};

#endif
