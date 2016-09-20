/**
*     @file:            BinarySearchTree.cpp
*     @author:          Austin Bailey
*     @date:            9/20/2016
*/

#include "Node.h"
#include <fstream>
#include <iostream>
#include "BinarySearchTree.h"
BinarySearchTree::BinarySearchTree()
{
      int temp;
      m_root=nullptr;
      std::ifstream file("data.txt");
      while(file.good())
      {
            file >> temp;
            insert(temp);
      }

}

BinarySearchTree::~BinarySearchTree()
{

}

bool BinarySearchTree::insert(int value)
{
      if(m_root==nullptr)
      {
            m_root=new Node(value);
            return true;
      }
      if()
      return true;
}

bool BinarySearchTree::remove(int value)
{
      return true;
}

bool BinarySearchTree::search(int value)
{
      return true;
}

bool BinarySearchTree::deleteMin()
{
      return true;
}

bool BinarySearchTree::deleteMax()
{
      return true;
}

void BinarySearchTree::preorder()
{
      std::cout << "Preorder\n";
      return;
}

void BinarySearchTree::inorder()
{
      std::cout << "Inorder\n";
      return;
}

void BinarySearchTree::levelorder()
{
      std::cout << "levelOrder\n";
      return;
}
