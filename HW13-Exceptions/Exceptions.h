#pragma once
#include "queueAsArray.h"

class exceptionQueueIsFull : public std::exception
{
public:
	const char* what() const noexcept //Redefines the virtual what() function
	{
		return "Error has occured: The Queue is full";
	}
};

class exceptionQueueIsEmpty : public std::exception
{
public:
	const char* what() const noexcept //Redefines the virtual what() function
	{
		return "Error has occured: The Queue is empty";

	}
};