#pragma once

#include <iostream>
#include <string>
#include "Date.h"
using namespace std; 

class Employee : public Date
{
protected:
	string employeeName;
	int employeeID;
	int employeeAge;
	char employeeGender;
	string employeeJobTitle;
	float employeeSalary;
	string employeeHireDate;
	string employeePhoneNum;

public:
	
	Employee();
	Employee(string employeeName, int employeeID, string employeePhoneNum, int employeeAge, char employeeGender, string employeeJobTitle, float employeeSalary, string employeeHireDate);

	~Employee();
	
	void setEmployeeName(string employeeName);
	void setEmployeeID(int employeeID);
	void setEmployeePhoneNum(string employeePhoneNum);
	void setEmployeeAge(int employeeAge);
	void setEmployeeGender(char employeeGender); //You did not include this but i assume we needed to add it
	void setEmployeeJobTitle(string employeeJobTitle);
	void setEmployeeSalary(float employeeSalary);
	void setEmployeeHireDate(string employeeHireDate);


	string getEmployeePhoneNum()const
	{
		return employeePhoneNum;
	}

	int getEmployeeAge()const
	{
		return employeeAge;
	}
	
	

	void virtual displayEmployeeInfo();

	// STUFF FOR HW04:
	//OVerloads the == Operator:
	bool operator ==(Employee& numOnRight);

	//Instead of overloading the + operator, we do a function instead:
	int addOne(Employee employee1, int ranNum);

	//Overloads the + operator:
	int operator +(int num);

	//Overloads the >> operator:
	friend istream& operator >>(istream& input, Employee& employee2);
	
	//Overloads the << operator:
	friend ostream& operator <<(ostream& output, Employee& employee2);

	// EC:
	// Overloads the ++i operator:
	Employee operator ++();

	//Overloads the i++ operator:
	Employee operator ++(int);
};
	