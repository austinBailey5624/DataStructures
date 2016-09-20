/**
*     @file:            main.cpp
*     @author:          Austin Bailey
*     @date:            9/20/2016
*/

#include <iostream>
#include <fstream>
#include "BinarySearchTree.h"
#include "Node.h"
int main()
{
      int choice;
      bool exit = false;
      BinarySearchTree* bst = new BinarySearchTree();
      while(!exit)
      {

            std::cout << ".........................................\n";
            std::cout << "Please choose one of the following commands\n";
            std::cout << "1) insert\n2) remove\n3) deletemin\n4) deletemax\n";
            std::cout << "5) preorder\n6) inorder\n7) levelorder\n8) exit\n";
            std::cin >> choice;
            if(choice==1)
            {
                  std::cout << "What number do you want inserted in the tree?\n";
                  std::cin >> choice;
                  if(bst->insert(choice))
                  {
                        std::cout << choice << "Added Successfully\n";
                  }
                  else
                  {
                        std::cout << choice << "Was not added Successfully\n";
                  }
            }
            else if(choice==2)
            {
                  std::cout << "Which number do you want removed from the tree?\n";
                  std::cin >> choice;
                  if(bst->remove(choice))
                  {
                        std::cout << choice << " Removed Successfully\n";
                  }
                  else
                  {
                        std::cout << choice << " Was not added Successfully\n";
                  }
            }
            else if(choice==3)
            {
                  if(bst->deleteMin())
                  {
                        std::cout << "Successfully deleted the minimum\n";
                  }
                  else
                  {
                        std::cout << "Failed to delete the mininmum\n";
                  }
            }
            else if(choice==4)
            {
                  if(bst->deleteMax())
                  {
                        std::cout << "Successfully deleted the maximum\n";
                  }
                  else
                  {
                        std::cout << "Failed to delete the maximum\n";
                  }
            }
            else if(choice==5)
            {
                  std::cout << "Printing preorder:\n";
                  bst->preorder();
            }
            else if(choice==6)
            {
                  std::cout << "Printing inorder:\n";
                  bst->inorder();
            }
            else if(choice==7)
            {
                  std::cout << "Printing levelorder\n";
                  bst->levelorder();
            }
            else if(choice==8)
            {
                  std::cout << "exiting\n";
                  exit=true;
            }
      }

      return 0;
}
