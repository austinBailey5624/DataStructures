/**
*	@file:		LinkedList.h
*	@author:	Austin Bailey
* 	@date:		8.29.2016
*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
	public:
		LinkedList();
		~LinkedList();
		void insert(int value);
		void print();
		Node* getFront()const;
		void setFront(Node* front);
		void populateFromFile();
		void delete(int value);
		int find(int value);
		void reverse();
		void concatenate();
	private:
		Node* m_front;
};
#endif
