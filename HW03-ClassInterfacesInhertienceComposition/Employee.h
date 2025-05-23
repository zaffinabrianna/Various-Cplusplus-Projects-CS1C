#pragma once

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Employee : public Date //Inherits Date
{
protected:
	string employeeName;
	int employeeID;
	string employeePhoneNum;
	int employeeAge;
	char employeeGender;
	string employeeJobTitle;
	float employeeSalary;
	Date employeeHireDate; // Help with this.

public:
	Employee();
	Employee(string employeeName, int employeeID, string employeePhoneNum, int employeeAge, char employeeGender, string employeeJobTitle, float employeeSalary, Date &employeeHireDate);

	~Employee();

	void setEmployeeName(string employeeName);
	void setEmployeeID(int employeeID);
	void setEmployeePhoneNum(string employeePhoneNum);
	void setEmployeeAge(int employeeAge);
	void setEmployeeGender(char employeeGender); //You did not include this but i assume we needed to add it
	void setEmployeeJobTitle(string employeeJobTitle);
	void setEmployeeSalary(float employeeSalary);

	//Virtual functions so that the classes that inherit employee can add more info to their output.
	const void virtual displayEmployeeInfo();
}; 
