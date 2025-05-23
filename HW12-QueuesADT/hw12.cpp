#include "queueAsArray.h"
/*************************************************************************
* AUTHOR       : Brianna Zaffina
* ASSIGNMENT   : HW12
* CLASS	       : CS 1C
* SECTION      : Tu/Th 1:30 - 3:50pm
* DUE DATE     : 11/16/23
*************************************************************************/


/*******************************************************************************
*
* Templates and Queues
*_______________________________________________________________________________
* This program uses templates to operate the many different functions of
* queues.
********************************************************************************/

int main()
{
	//Initalization of queues of diff types:
	queueType<int> queue;
	queueType<double> queue2;
	queueType<string> queue3;

	//Copy and Assignment:
	queueType<int> theOG;
	queueType<int> assignMe;

	theOG.addQueue(5);
	theOG.addQueue(7);
	theOG.addQueue(6);
	
	cout << "This is the orginal queue: \n";
	theOG.printQueue();
	
	cout << "\n\nThis is the copy constructor queue:\n";
	queueType<int> copyMe(theOG);
	copyMe.printQueue();

	cout << "\n\nThis is the assignment operator queue:\n";
	assignMe = theOG;
	assignMe.printQueue();

	cout << endl << endl;
	
	//Using Queue Operations:
	cout << "\n\nTESTING QUEUE OPERATIONS:\n";
	queueType<int> testMe;
	//Enqueue:
	cout << "This is me adding 5 using enqueue:\n";
	testMe.enqueue(5);
	testMe.printQueue();

	//Dequeue:
	cout << "\n\nThis is me dequeing an object:\n";
	testMe.dequeue();
	testMe.printQueue();
	
	//Front():
	cout << "\n\nThis is the front method:\n";
	
	testMe.addQueue(1);
	testMe.addQueue(2);
	testMe.printQueue();

	int frontElem = testMe.front();
	cout << "\nThe front element of this queue is: " << frontElem << endl << endl;

	//Size()
	cout << "This is using the size() method: \n";
	int queueSize = testMe.size();
	cout << "The size of this queue is: " << queueSize << endl << endl;

	//isEmpty()
	cout << "This is me testing to see if the queue is empty:\n";
	bool empty = testMe.isEmptyQueue();

	if (empty == true)
	{
		cout << "This list is empty.\n\n";
	}
	
	else
	{
		cout << "This list is NOT empty.\n\n";
	}

	//isFull()
	cout << "This is me testing to see if the queue is full:\n";
	bool full = testMe.isFullQueue();

	if (full == true)
	{
		cout << "This list is full.\n\n";
	}

	else
	{
		cout << "This list is NOT full.\n\n";
	}

	cout << "Will you like to delete the previous output prior to doing to the next Queue Output? Y or N:\n";
	char yOrN = ' ';
	cin >> yOrN;

	yOrN = toupper(yOrN);

	if (yOrN == 'Y')
	{
		system("CLS");
	}

	else
	{

	}
	
	//Integer Queue First:
	queue.initializeQueue();
	//Additions:
	cout << "Integer Queue Addition Outputs:\n";
	queue.addQueue(1);
	queue.printQueue();
	cout << endl;
	queue.addQueue(2);
	queue.printQueue();
	cout << endl;
	queue.addQueue(3);
	queue.printQueue();
	cout << endl;
	queue.addQueue(4);
	queue.printQueue();
	cout << endl;
	queue.addQueue(5);
	queue.printQueue();
	cout << endl;
	queue.addQueue(6);
	queue.printQueue();
	cout << endl;
	cout << endl;

	//Deletions:
	cout << "Integer Queue Deletion Outputs:\n";
	queue.deleteQueue();
	queue.printQueue();
	cout << endl;
	queue.deleteQueue();
	queue.printQueue();
	cout << endl;
	queue.deleteQueue();
	queue.printQueue();
	cout << endl;
	queue.deleteQueue();
	queue.printQueue();
	cout << endl;
	cout << endl;
	
	//More additions:
	cout << "Integer Queue +5 More Additions:\n";
	queue.addQueue(1);
	queue.printQueue();
	cout << endl;
	queue.addQueue(2);
	queue.printQueue();
	cout << endl;
	queue.addQueue(3);
	queue.printQueue();
	cout << endl;
	queue.addQueue(4);
	queue.printQueue();
	cout << endl;
	queue.addQueue(5);
	queue.printQueue();
	cout << endl;
	cout << endl;

	//More Deletions:
	cout << "Integer Queue +3 More Deletions:\n";
	queue.deleteQueue();
	queue.printQueue();
	cout << endl;
	queue.deleteQueue();
	queue.printQueue();
	cout << endl;
	queue.deleteQueue();
	queue.printQueue();
	cout << endl;
	cout << endl;

	//Continuing:
	cout << "Will you like to delete the previous output prior to doing to the next Queue Output? Y or N:\n";
	cin >> yOrN;
	
	yOrN = toupper(yOrN);

	if (yOrN == 'Y')
	{
		system("CLS");
	}

	else
	{

	}

	//Double Queue First:
	queue2.initializeQueue();
	//Additions:
	cout << "Double Queue Addition Outputs:\n";
	queue2.addQueue(1.1);
	queue2.printQueue();
	cout << endl;
	queue2.addQueue(2.2);
	queue2.printQueue();
	cout << endl;
	queue2.addQueue(3.3);
	queue2.printQueue();
	cout << endl;
	queue2.addQueue(4.4);
	queue2.printQueue();
	cout << endl;
	queue2.addQueue(5.5);
	queue2.printQueue();
	cout << endl;
	queue2.addQueue(6.6);
	queue2.printQueue();
	cout << endl;
	cout << endl;

	//Deletions:
	cout << "Double Queue Deletion Outputs:\n";
	queue2.deleteQueue();
	queue2.printQueue();
	cout << endl;
	queue2.deleteQueue();
	queue2.printQueue();
	cout << endl;
	queue2.deleteQueue();
	queue2.printQueue();
	cout << endl;
	queue2.deleteQueue();
	queue2.printQueue();
	cout << endl;
	cout << endl;

	//More additions:
	cout << "Double Queue +5 More Additions:\n";
	queue2.addQueue(1.1);
	queue2.printQueue();
	cout << endl;
	queue2.addQueue(2.2);
	queue2.printQueue();
	cout << endl;
	queue2.addQueue(3.3);
	queue2.printQueue();
	cout << endl;
	queue2.addQueue(4.4);
	queue2.printQueue();
	cout << endl;
	queue2.addQueue(5.5);
	queue2.printQueue();
	cout << endl << endl;

	//More Deletions:
	cout << "Double Queue +3 More Deletions:\n";
	queue2.deleteQueue();
	queue2.printQueue();
	cout << endl;
	queue2.deleteQueue();
	queue2.printQueue();
	cout << endl;
	queue2.deleteQueue();
	queue2.printQueue();
	cout << endl;
	cout << endl;

	//Continuing:
	cout << "Will you like to delete the previous output prior to doing to the next Queue Output? Y or N:\n";
	cin >> yOrN;

	yOrN = toupper(yOrN);

	if (yOrN == 'Y')
	{
		system("CLS");
	}

	else
	{

	}

	//String Queue First:
	queue3.initializeQueue();
	//Additions:
	cout << "String Queue Addition Outputs:\n";
	queue3.addQueue("Hello");
	queue3.printQueue();
	cout << endl;
	queue3.addQueue("My");
	queue3.printQueue();
	cout << endl;
	queue3.addQueue("Name");
	queue3.printQueue();
	cout << endl;
	queue3.addQueue("Is");
	queue3.printQueue();
	cout << endl;
	queue3.addQueue("Brianna");
	queue3.printQueue();
	cout << endl;
	queue3.addQueue("Zaffina");
	queue3.printQueue();
	cout << endl;
	cout << endl;

	//Deletions:
	cout << "String Queue Deletion Outputs:\n";
	queue3.deleteQueue();
	queue3.printQueue();
	cout << endl;
	queue3.deleteQueue();
	queue3.printQueue();
	cout << endl;
	queue3.deleteQueue();
	queue3.printQueue();
	cout << endl;
	queue3.deleteQueue();
	queue3.printQueue();
	cout << endl;
	cout << endl;

	//More additions:
	cout << "String Queue +5 More Additions:\n";

	queue3.addQueue("Hello");
	queue3.printQueue();
	cout << endl;
	queue3.addQueue("My");
	queue3.printQueue();
	cout << endl;
	queue3.addQueue("Name");
	queue3.printQueue();
	cout << endl;
	queue3.addQueue("Is");
	queue3.printQueue();
	cout << endl;
	queue3.addQueue("Brianna");
	cout << endl << endl;

	//More Deletions:
	cout << "String Queue +3 More Deletions:\n";
	queue3.deleteQueue();
	queue3.printQueue();
	cout << endl;
	queue3.deleteQueue();
	queue3.printQueue();
	cout << endl;
	queue3.deleteQueue();
	queue3.printQueue();
	cout << endl;
	cout << endl;

	return 0;
}