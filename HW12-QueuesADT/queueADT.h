#pragma once
#ifndef H_queueADT
#define H_queueADT

#include <iostream>
#include <cassert>
using namespace std;

template <class Type>

class queueADT
{
public:
	//Function to determine whether the queue is empty
	virtual bool isEmptyQueue()const = 0;

	//Function to determine whether the queue is full
	virtual bool isFullQueue()const = 0;

	//Function to intalize the queue to an empty state
	virtual void initializeQueue() = 0;

	//Function to return the first element of the queue
	virtual Type front()const = 0;

	//function to return the last element of the queue
	virtual Type back()const = 0;

	//Function to add queueElement to the queue
	virtual void addQueue(const Type& queueElement) = 0;

	//Function to remote the first element of the queue
	virtual void deleteQueue() = 0;

	//Function to return the num of elements stored

	//
};

#endif 