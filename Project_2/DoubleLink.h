#pragma once
// Author:			Westley Case 
// Assignment:		Project 2 
// File:			DoubleLink.h
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/21/2015
// Description:		Create single as well as doule linked list, output the data.
// ======================================================================
#include"Node.h"
// ======================================================================

class DoubleLink
{
public:
	// DoubleLink()
	// Purpose: Constructor for DoubleLinks
	// Parameters: None
	// Returns: None
	DoubleLink();

	// insertOrder()
	// Purpose: Order the Nodes as they are added
	// Parameters: Node pointer
	// Returns: void
	void insertOrder(Node*);

	// traversePrint()
	// Purpose: print to console each node's data
	// Parameters: The print function
	// Returns: void
	void traversePrint(void(*_function)(int));
private:
	Node* head;
};

