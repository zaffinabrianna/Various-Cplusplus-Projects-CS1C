#pragma once

#include <iostream>
#include <string>
using namespace std;

class Date
{
protected:
	int month;
	int day;
	int year;

public:
	Date();
	Date(int month, int day, int year);

	~Date();
	
	friend ostream& operator <<(ostream& output, Date& employeeHireDate);

	int getMonth();
	int getDay();
	int getYear();
};