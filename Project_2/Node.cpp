// Author:			Westley Case 
// Assignment:		Project 2 
// File:			Node.cpp
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/21/2015
// Description:		Create single as well as doule linked list, output the data.
// ======================================================================
#include "Node.h"
// ======================================================================

Node::Node()
{
	data = 0;
	next = nullptr;
	previous = nullptr;
}

Node::Node(int _data)
{
	data = _data;
	next = nullptr;
	previous = nullptr;
}

int Node::getData() const
{
	return data;
}

Node* Node::getNext() const
{
	return next;
}

Node* Node::getPrevious() const
{
	return previous;
}

void Node::setData(int _data)
{
	data = _data;
}

void Node::setNext(Node* _next)
{
	next = _next;
}

void Node::setPrevious(Node* _prev)
{
	previous = _prev;
}
