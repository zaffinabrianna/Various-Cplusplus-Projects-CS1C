#include "Date.h"

//Default Constructor:
Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}

//Overloaded Constructor:
Date::Date(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this->year = year;
}

/****************************************************************************
* Method Operator << : Class Date
* ___________________________________________________________________________
* This method operator is an overloaded version of the << operator.
* The purpose of this method operator is to allow the date class, and
* all of its attributes, to be oututted to the cosole.
* ___________________________________________________________________________
* Pre-Conditions:
*	The use of the "<<" operator on the Date object type.
* 
* Post-Conditions:
*	An object of ostream is used and the output object is returned.
*****************************************************************************/

ostream& operator <<(ostream& output, Date& employeeHireDate)
{
	output << employeeHireDate.getMonth() << '/' << employeeHireDate.getDay() << '/' << employeeHireDate.getYear();
	return output;
}

//Getters:
int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

int Date::getYear()
{
	return year;
}

//Destructor:
Date::~Date()
{

}