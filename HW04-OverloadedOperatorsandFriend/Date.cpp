#include "Date.h"

Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}
Date:: Date(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this->year = year;
}

Date::~Date()
{

}
