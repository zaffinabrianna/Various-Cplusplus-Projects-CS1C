#pragma once

#ifndef H_QueueAsArray
#define H_QueueAsArray

#include "queueADT.h"
#include "Exceptions.h"


template <class Type>
class queueType : public queueADT<Type>
{
private:
	int maxQueueSize; //stores max queue size
	int count; //store number of elements in queue
	int queueFront; //points to first element of queue
	int queueRear; //points to last element of queue
	Type* list;  //pointer to array that holds queue elements

public:
	//Move constructor:
	queueType(queueType&& otherQueue);

	//Overloaded Move Assignment Operator:
	queueType<Type>& operator=(queueType&& otherQueue);

	//Enqueue Method
	void enqueue(const Type& queueObject);

	//Dequeue Method
	void dequeue();

	//Size Method:
	int size()const;

	//Overloaded assignment operator
	const queueType<Type>& operator=(const queueType<Type>&);

	//Determines whether queue is empty
	bool isEmptyQueue()const;

	//Determines whether queue is full
	bool isFullQueue()const;

	//Returns first element of the queue:
	Type front()const;

	//Returns last element of the queue
	Type back()const;

	//Adds queueElements to the queue
	void addQueue(const Type& queueElement);

	//Intaializes the queue
	void initializeQueue();

	//Remove first element of the queue
	void deleteQueue();

	//Print member function:
	void printQueue()const;

	//Constructor
	queueType(int queueSize = 100);

	//Copy Constructor
	queueType(const queueType<Type>& otherQueue);

	//Destructor
	~queueType();
};

//Overloaded Move Assignment Operator:
template <class Type>
queueType<Type>& queueType<Type>::operator=(queueType&& otherQueue)
{
	if (this != &otherQueue)
	{
		delete[] list;

		list = otherQueue.list;
		maxQueueSize = otherQueue.maxQueueSize;
		queueFront = otherQueue.queueFront;
		queueRear = otherQueue.queueRear;
		count = otherQueue.count;

		otherQueue.list = nullptr;
		otherQueue.maxQueueSize = 0;
		otherQueue.queueFront = 0;
		otherQueue.queueRear = -1;
		otherQueue.count = 0;
	}

	return *this;
}

//Move constructor:
template <class Type>

queueType<Type>::queueType(queueType&& otherQueue)
{
	list = otherQueue.list;
	maxQueueSize = otherQueue.maxQueueSize;
	queueFront = otherQueue.queueFront;
	queueRear = otherQueue.queueRear;
	count = otherQueue.count;

	otherQueue.list = nullptr;
	otherQueue.maxQueueSize = 0;
	otherQueue.queueFront = 0;
	otherQueue.queueRear = -1;
	otherQueue.count = 0;
}
//Enqueue Method:
template <class Type>
void queueType<Type>::enqueue(const Type& queueObject)
{
	if (!isFullQueue())
	{
		queueRear = (queueRear + 1) % maxQueueSize;
		count++;
		list[queueRear] = queueObject;
	}

	else
	{
		throw exceptionQueueIsFull();
	}	

}

//Dequeue Method:
template <class Type>
void queueType<Type>::dequeue()
{
	if (!isEmptyQueue())
	{
		queueFront = (queueFront + 1) % maxQueueSize;
		count--;
	}

	else
	{
		throw exceptionQueueIsEmpty();
	}
}

//Size method:
template <class Type>
int queueType<Type>::size()const
{
	return count;
}

template <class Type>
//Returns true if the queue is empty, otherwise returns false
bool queueType<Type>::isEmptyQueue()const
{
	return (count == 0);
} // end isEmptyQueue()

template <class Type>
//Returns true if the queue is full, otherwise returns false
bool queueType<Type>::isFullQueue()const
{
	return (count == maxQueueSize);
} // end isFullQueue()

template <class Type>
void queueType<Type>::initializeQueue()
{
	queueFront = 0;
	queueRear = maxQueueSize - 1;
	count = 0;
} // end intalizeQueue()

template <class Type>
Type queueType<Type>::front()const
{
	assert(!isEmptyQueue());

	return list[queueFront];
} //end front()

template <class Type>
Type queueType<Type>::back()const
{
	assert(!isEmptyQueue());

	return list[queueRear];
} //end back()

template <class Type>
void queueType<Type>::addQueue(const Type& newElement)
{
	if (!isFullQueue())
	{
		queueRear = (queueRear + 1) % maxQueueSize;

		count++;

		list[queueRear] = newElement;
	}

	else
	{
		cout << "Cannot add to a full queue." << endl;
	}
} //end addQueue()


template <class Type>
void queueType<Type>::deleteQueue()
{
	if (!isEmptyQueue())
	{
		count--;
		queueFront = (queueFront + 1) % maxQueueSize;
	}

	else
	{
		cout << "Cannot remove from an empty queue." << endl;
	}
} //end deleteQueue()

template <class Type>
void queueType<Type>::printQueue()const
{
	for (int i = queueFront; i != (queueRear + 1) % maxQueueSize; i = (i + 1) % maxQueueSize)
	{
		cout << list[i] << " ";
	}
}
//Constructor:
template <class Type>
queueType<Type>::queueType(int queueSize)
{
	if (queueSize <= 0)
	{
		cout << "Size of the array to hold the queue must be positive." << endl;
		cout << "Creating an array of size 100." << endl;

		maxQueueSize = 100;
	}

	else
	{
		maxQueueSize = queueSize;
	}

	queueFront = 0;
	queueRear = maxQueueSize - 1;
	count = 0;
	list = new Type[maxQueueSize];
}

//Destructor
template <class Type>
queueType<Type>::~queueType()
{
	delete[] list;
}

//Overloaded Operator =
template <class Type>
const queueType<Type>& queueType<Type>::operator=(const queueType<Type>& otherQueue)
{
	if (this != &otherQueue)
	{
		delete[] list;

		maxQueueSize = otherQueue.maxQueueSize;
		count = otherQueue.count;
		queueFront = otherQueue.queueFront;
		queueRear = otherQueue.queueRear;

		list = new Type[maxQueueSize];

		for (int i = 0; i < count; i++)
		{
			list[i] = otherQueue.list[i];
		}
	}

	return *this;
} //end of assignment operator

template <class Type>
queueType<Type>::queueType(const queueType<Type>& otherQueue)
{
	maxQueueSize = otherQueue.maxQueueSize;
	count = otherQueue.count;
	queueFront = otherQueue.queueFront;
	queueRear = otherQueue.queueRear;

	list = new Type[maxQueueSize];

	for (int i = 0; i < count; i++)
	{
		list[i] = otherQueue.list[i];
	}
} // end of copy constructor

#endif // !H_QueueAsArray