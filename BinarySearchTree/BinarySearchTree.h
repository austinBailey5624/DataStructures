/**
*     @file:            BinarySearchTree.h
*     @author:          Austin Bailey
*     @date:            9/20/2016
*/

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "Node.h"
#include <iostream>
#include <fstream>

class BinarySearchTree
{
      public:
            BinarySearchTree();
            ~BinarySearchTree();
            bool insert(int value);
            bool remove(int value);
            bool search(int value);
            bool deleteMin();
            bool deleteMax();
            void preorder();
            void inorder();
            void levelorder();
      private:
            Node* m_root;
};
#endif
