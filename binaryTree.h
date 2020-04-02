#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>




class BinaryTree{
 private:
   struct TreeNode{
     int key;
     TreeNode* left;
     TreeNode* right;
     TreeNode* parent;
   };

   TreeNode* root;
   TreeNode* search(TreeNode* x, int k);
   TreeNode* minimum(TreeNode* x);
   TreeNode* maximum(TreeNode* x);
   TreeNode* sucessor(TreeNode* x);
   void deleteNode(TreeNode* z);
   void transplant(TreeNode* u, TreeNode* v);
   int getHeight(TreeNode* x);
   void printLevel(TreeNode* x, int l);

  public:
    BinaryTree();
    BinaryTree(int n);
    void insert(int n);
    void getSearch(TreeNode* x, int k);
    void getMin(TreeNode* x);
    void getMax(TreeNode* x);
    void getSucessor(int k);
    TreeNode* getRoot();
    void inorder(TreeNode* x);
    void getDelete(int k);
    void print();
    ~BinaryTree();


};

#endif
