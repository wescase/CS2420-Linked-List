// Author:			Westley Case 
// Assignment:		Project 2 
// File:			SingleLink.cpp
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/21/2015
// Description:		Create single as well as doule linked list, output the data.
// ======================================================================
#include "SingleLink.h"
// ======================================================================


SingleLink::SingleLink()
{
	head = nullptr;
}

void SingleLink::insert(Node* _node)
{
	if (head == nullptr)
	{
		head = _node;
	}
	else if (head->getNext() == nullptr)
	{
		head->setNext(_node);
	}
	else
	{
		Node* p;
		p = head->getNext();
		while (p->getNext() != nullptr)
		{
			p = p->getNext();
		}
		p->setNext(_node);
	}
}


void SingleLink::traversePrint(void(*_function)(int))
{
	Node* p;
	p = head;
	while (p)
	{
		_function(p->getData());
		p = p->getNext();
	}
}

Node* SingleLink::getHead()
{
	return head;
}