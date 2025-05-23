#include "Programmer.h"

// Default Constructor:
Programmer::Programmer()
{
	departmentNum = 0;
	supervisorName = " ";
	percentLastSalaryIncrease = 0.0;
	cPlusPlusIdentifier = false;
	javaIdentifier = false;
}

//Overloaded Constructor:
Programmer::Programmer(int departmentNum, string supervisorName, float percentLastSalaryIncrease, 
	bool cPlusPlusIdentifier, bool javaIdentifier, string employeeName, int employeeID, string employeePhoneNum,
	int employeeAge, char employeeGender, string employeeJobTitle, float employeeSalary, Date employeeHireDate) 
	: Employee(employeeName, employeeID, employeePhoneNum, employeeAge, employeeGender, employeeJobTitle, employeeSalary, employeeHireDate)

{
	this->departmentNum = departmentNum;
	this->supervisorName = supervisorName;
	this->percentLastSalaryIncrease = percentLastSalaryIncrease;
	this->cPlusPlusIdentifier = cPlusPlusIdentifier;
	this->javaIdentifier = javaIdentifier;
}

//Destructor 
Programmer::~Programmer()
{

}

//Setters to change info if needed:
void Programmer::setDepartmentNum(int departmentNum)
{
	this->departmentNum = departmentNum;
}
void Programmer::setSupervisorName(string supervisorName)
{
	this->supervisorName = supervisorName;
}
void Programmer::setPercentLastSalaryIncrease(float percentLastSalaryIncrease)
{
	this->percentLastSalaryIncrease = percentLastSalaryIncrease;
}
void Programmer::setCPlusPlusIndentifier(bool cPlusPlusIdentifier)
{
	this->cPlusPlusIdentifier = cPlusPlusIdentifier;
}
void Programmer::setJavaIdentifier(bool javaIdentifier)
{
	this->javaIdentifier = javaIdentifier;
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

const void Programmer::displayEmployeeInfo()
{
	cout << "Name: " << employeeName << endl;
	cout << "Employee ID: " << employeeID << endl;
	cout << "Phone: " << employeePhoneNum << endl;
	cout << "Age: " << employeeAge << endl;
	cout << "Gender: " << employeeGender << endl;
	cout << "Job Title: " << employeeJobTitle << endl;
	cout << "Salary: $" << employeeSalary << endl;
	cout << "Hire Date: " << employeeHireDate << endl; //Do not know how to display this
	cout << "Department: " << departmentNum << endl;
	cout << "Supervisor's Name: " << supervisorName << endl;
	cout << "Raise %: " << percentLastSalaryIncrease << endl;
	cout << "C++ Knowledge: ";

	if (cPlusPlusIdentifier == true)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	cout << "Java Knowledge: ";
	if (javaIdentifier == true)
	{
		cout << "Yes" << endl << endl;
	}
	else
	{
		cout << "No" << endl << endl;
	}
}