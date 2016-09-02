/**
*	@file:		LinkedList.cpp
*	@author:	Austin Bailey
*	@date:		8/29/2016
*/

#include <stdexcept>
#include <string>
#include <fstream>
#include <iostream>

#include "LinkedList.h"

LinkedList::LinkedList()
{
	m_front=nullptr;
}
LinkedList::~LinkedList()
{
	Node* temp;
	while(m_front->getNext()!=nullptr)
	{
		temp=m_front->getNext();
		delete m_front;
		m_front=temp;
	}
	if(m_front!=nullptr)
	{
		delete m_front;
	}
}

void LinkedList::insert(int value)
{
	//TODO: implement search to check if the value is already in the list
	Node* temp=new Node();
	temp->setValue(value);
	temp->setNext(nullptr);

	if(m_front==nullptr)//edge case where list is empty
	{
		m_front=temp;
		return;
	}
	Node* temp2;
	temp2=m_front;
	while(temp2->getNext()!=nullptr)
	{
		temp2=temp2->getNext();
	}
	temp2->setNext(temp);
}

bool LinkedList::erase(int value)//returns true if the value is deleted false else
{
	//first use find() to determine if its in the list -if not return false
	//then delete the node
}

int LinkedList::find(int value)//returns -1 if the value is not in the list, the index of the value else
{

}

void LinkedList::reverse()
{

}

void LinkedList::concatenate()
{

}
void LinkedList::print()
{
	if(m_front==nullptr)
	{
		std::cout << "The list is empty";
		return;
	}
	Node* temp;
	temp=m_front;
	while(temp->getNext()!=nullptr)
	{
		std::cout << temp->getValue();
		std::cout << " ";
		temp=temp->getNext();
	}
	std::cout << temp->getValue();
	std::cout << " \n";
}

Node* LinkedList::getFront()const
{
	return m_front;
}

void LinkedList::setFront(Node* front)
{
	m_front=front;
}

void LinkedList::populateFromFile()
{
	int temp;
	std::ifstream file("data.txt");
	while(file.good())
	{
			file >> temp;
			insert(temp);
	}
}
