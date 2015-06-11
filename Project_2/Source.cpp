// Author:			Westley Case 
// Assignment:		Project 2 
// File:			Source.cpp
// Instructor:		Dr. Reza Sanati 
// Class:			CS2420 
// Date Written:	5/21/2015
// Description:		Create single as well as doule linked list, output the data.
// ======================================================================
#include"Source.h"
// ======================================================================

void print(int _data)
{
	cout << _data << endl;
}


int main()
{
	// create the file stream and file name variable.
	ifstream inFile;
	string fileName;

	cout << "Westley Case\n" << "CS 2420-001\n" << "Program 2 - Linked Lists\n" << endl;
	while (fileName == "")
	{
		SingleLink list = SingleLink();
		DoubleLink dList = DoubleLink();

		// Output program information
		cout << "\nEnter the file name you would like to use or quit (q):    ";
		getline(cin, fileName);

		// check if user wants to quit.
		if (fileName == "q")
			break;
		// otherwise try to open the file
		inFile.open(fileName);
		if (inFile)
		{
			while (!inFile.eof())
			{
				string inText;
				getline(inFile, inText);

				if (inText.size() > 0)
				{
					try
					{
						int num = stoi(inText);
						// Add the int to the single linked list
						Node* p = new Node(num);
						list.insert(p);
					}
					catch (invalid_argument e)
					{
						cout << "\n Your file has currupt data, Please fix and try again\n" << endl;
						system("PAUSE");
						return EXIT_FAILURE;
					}
				}
			}
			// Now print out the results
			cout << "Single Linked List Contents:" << endl;
			list.traversePrint(print);
			
			Node* front = list.getHead();
			
			while (front != nullptr)
			{
				Node* dp = new Node(front->getData());
				dList.insertOrder(dp);
				front = front->getNext();
			}

			// print out the dList 
			cout << "Double Linked List Contents:" << endl;
			dList.traversePrint(print);

			inFile.close();
			// clear out the list and dList's
			fileName = "";
		}
		else
		{
			cout << "The file you entered does not exist, try again" << endl;
			fileName = "";
		}

	}
	system("pause");
	return 0;
}