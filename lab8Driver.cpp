
#include "binaryTree.h"
#include <iostream>

int main()
{
  BinaryTree t;
  t.insert(10);
  t.insert(14);
  t.insert(40);
  t.inorder(t.getRoot());
  t.getSearch(t.getRoot(),42);
  t.getMax(t.getRoot());
  t.getMin(t.getRoot());
  t.getSucessor(42);
  //t.getDelete(22);
  t.inorder(t.getRoot());
  t.print();
}
