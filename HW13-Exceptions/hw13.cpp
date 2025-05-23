#include "queueAsArray.h"
#include "Exceptions.h"
#include <cassert>
/*************************************************************************
* AUTHOR       : Brianna Zaffina
* ASSIGNMENT   : HW13
* CLASS	       : CS 1C
* SECTION      : Tu/Th 1:30 - 3:50pm
* DUE DATE     : 11/16/23
*************************************************************************/


/*******************************************************************************
*
* Exceptions
*_______________________________________________________________________________
* This program uses a number of exception handlers to show how exceptions
* can be used and outputted to the console.
********************************************************************************/

int main()
{
	cout << "This is using the assert macro pass state:\n";
	int num = 10;
	int num2 = 2;
	int quotient = 0;

	assert(num2 != 0);

	quotient = num / num2;

	cout << "The quotient of 10 and 2 is: " << quotient << endl << endl;

	/*cout << "This is using the assert fail state:\n";
	num2 = 0;
	
	assert(num2 != 0);

	quotient = num / num2;
	
	This causes the program to fail and exit because of the assert state failing*/

	//Trying out the exceptionQueueIsFull handler:
	queueType<int> queueFull;

	for (int i = 0; i < 100; i++)
	{
		i++;
		queueFull.enqueue(i);
	}

	try //Tries to add an item to the full queue
	{ 
		queueFull.enqueue(7);
	}
	catch (const std::exception& e) // Throws the exception
	{
		std::cout << e.what() << std::endl;
	}
	
	//Trying out the exceptionQueueIsEmpty handler:
	queueType<int> queueEmpty;

	try
	{
		queueEmpty.dequeue();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}