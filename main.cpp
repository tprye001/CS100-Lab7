#include "container.h"
#include "sort.h"
#include "selectionSort.h"
#include "bubbleSort.h"
#include "listContainter.h"
#include "mergSort.h"
#include "vectorContainer.h"
#include <list>
#include <vector>
#include <iostream>

using namespace std;

int main(){
  MergeSortAlgorithm ms;
  SelectionSortAlgorithm ss;
  BubbleSortAlgorithm bs;

  vector<int> v1(0);
  v1.push_back(4);
  v1.push_back(5);
  v1.push_back(2);
  v1.push_back(3);
  v1.push_back(5);

  vectorContainer test2 = vectorContainer(v1);
  test2.set_sort(&bs);

  cout << "Pre Bubble Sort: "; 
  test2.print();
  
  test2.sort();
  
  cout << "Post Bubble Sort: "; 
  test2.print();

  vectorContainer test3 = vectorContainer(v1);
  test3.set_sort(&ss);
  
  cout << "Pre Selection Sort: "; 
  test3.print();
  
  test3.sort();
  
  cout << "Post Selection Sort: "; 
  test3.print();


  vectorContainer test1 = vectorContainer(v1);
  test1.set_sort(&ms);
  
  cout << "Pre-Merge Sort: "; 
  test1.print();

  test1.sort();

  cout << "Post-Merge Sort: "; 
  test1.print();
  
  
  list<int> list1;
  list1.push_back(4);
  list1.push_back(5);
  list1.push_back(2);
  list1.push_back(3);
  list1.push_back(5);

  listContainer test4 = listContainer(list1);
  test4.set_sort(&ms);
  
  cout << "Pre Merge Sort: "; 
  test4.print();
  
  test4.sort();
  
  cout << "Post Merge Sort: "; 
  test4.print();

  listContainer test5 = listContainer(list1);
  test5.set_sort(&bs);
  cout << "Pre Bubble Sort: "; 
  test5.print();
  
  test5.sort();
  
  cout << "Post Bubble Sort: "; 
  test5.print();

  listContainer test6 = listContainer(list1);
  test6.set_sort(&ss);
  cout << "Pre Selection Sort: "; 
  test6.print();
  
  test6.sort();
  
  cout << "Post Selection Sort: "; 
  test6.print();

  return 0;
}
