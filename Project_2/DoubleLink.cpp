// Author:			Westley Case 
// Assignment:		Project 2 
// File:			DoubleLink.cpp
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/21/2015
// Description:		Create single as well as doule linked list, output the data.
// ======================================================================
#include "DoubleLink.h"
// ======================================================================

DoubleLink::DoubleLink()
{
	head = nullptr;
}

void DoubleLink::insertOrder(Node* _node)
{
	if (head == nullptr)
	{
		head = _node;
	}
	else if (head->getNext() == nullptr)
	{
		head->setNext(_node);
		_node->setPrevious(head);
	}
	else
	{
		Node* p;
		p = head;
		// if the number is less then head it becomes new head
		if (_node->getData() <= p->getData())
		{
			head = _node;
			_node->setNext(p);
		}
		// if the number is greater then head traverse to the next and test it
		else 
		{
			while (_node->getData() > p->getData())
			{
				// if p->getNext is null then _node is the largest, & we need to break as not to break this code
				if (p->getNext() == nullptr)
				{
					p->setNext(_node);
					_node->setPrevious(p);
					_node->setNext(nullptr);
				}
				p = p->getNext();
			}
			// at this point p > _node > q
			Node* q;
			q = p->getPrevious();

			q->setNext(_node);
			_node->setPrevious(q);
			_node->setNext(p);
			p->setPrevious(_node);
		}
	}
}

void DoubleLink::traversePrint(void(*_function)(int))
{
	Node* p;
	p = head;
	while (p)
	{
		_function(p->getData());
		p = p->getNext();
	}
}
