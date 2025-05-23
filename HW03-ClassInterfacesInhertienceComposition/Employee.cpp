#include "Employee.h"

//Default Constructor:
Employee::Employee()
{
	employeeName = " ";
	employeeID = 0;
	employeePhoneNum = " ";
	employeeAge = 0;
	employeeGender = ' ';
	employeeJobTitle = " ";
	employeeSalary = 0.0;
}

//Overloaded Constructor:
Employee::Employee(string employeeName, int employeeID, string employeePhoneNum, int employeeAge, char employeeGender, string employeeJobTitle, float employeeSalary, Date& employeeHireDate)
	:employeeName{ employeeName }, employeeID{ employeeID }, employeePhoneNum{ employeePhoneNum }, employeeAge{ employeeAge }, employeeGender {employeeGender}, employeeJobTitle{ employeeJobTitle }, employeeSalary{ employeeSalary }, employeeHireDate{ employeeHireDate } {}

//Destructor
Employee::~Employee()
{

}

//Setters to change info if needed:
void Employee::setEmployeeName(string employeeName)
{
	this->employeeName = employeeName;
}
void Employee::setEmployeeID(int employeeID)
{
	this->employeeID = employeeID;
}
void Employee::setEmployeePhoneNum(string employeePhoneNum)
{
	this->employeePhoneNum = employeePhoneNum;
}
void Employee::setEmployeeAge(int employeeAge)
{
	this->employeeAge = employeeAge;
}
void Employee::setEmployeeGender(char employeeGender)
{
	this->employeeGender = employeeGender;
}
void Employee::setEmployeeJobTitle(string employeeJobTitle)
{
	this->employeeJobTitle = employeeJobTitle;
}
void Employee::setEmployeeSalary(float employeeSalary)
{
	this->employeeSalary = employeeSalary;
}	


/****************************************************************************
* DisplayEmployeeInfo()
* ___________________________________________________________________________
* This function displays all of the employees information. It is a virtual
* function so therefore the inherited classes can display different info.
* whilst using the same function.
* ___________________________________________________________________________
* Pre-Conditions:
*	Information entered for each variable and object.
*
* Post-Conditions:
*	Output of all the information is outputted to the console
*****************************************************************************/
const void Employee::displayEmployeeInfo()
{
	cout << "Name: " << employeeName << endl;
	cout << "Employee ID: " << employeeID << endl;
	cout << "Phone: " << employeePhoneNum << endl;
	cout << "Age: " << employeeAge << endl;
	cout << "Gender: " << employeeGender << endl;
	cout << "Job Title: " << employeeJobTitle << endl;
	cout << "Salary: " << employeeSalary << endl;
	cout << "Hire Date: " << employeeHireDate << endl;
}
