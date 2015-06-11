#pragma once
// Author:			Westley Case 
// Assignment:		Project 2 
// File:			SingleLink.h
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/21/2015
// Description:		Create single as well as doule linked list, output the data.
// ======================================================================
#include"Node.h"
// ======================================================================

class SingleLink
{
public:
	// SingleLInk()
	// Purpose: Default constructor
	// Parameters: None
	// Returns: None
	SingleLink();

	// insert(Node*)
	// Purpose: insert a Node onto the list
	// Parameters: Node pointer
	// Returns: void
	void insert(Node*);

	// traversePrint(_function)
	// Purpose: Print each element into the array
	// Parameters: function pointer
	// Returns: void
	void traversePrint(void (*)(int));

	// getHead()
	// Purpose: getter for the first Node in the list
	// Parameters: None
	// Returns: Node pointer
	Node* getHead();
private:
	Node* head;
};

