#include "Programmer.h"

Programmer::Programmer()
{
	departmentNum = 0;
	supervisorName = " ";
	percentLastSalaryIncrease = 0.0;
	cPlusPlusIdentifier = false;
	javaIdentifier = false;
}
Programmer::Programmer(int departmentNum, string supervisorName, float percentLastSalaryIncrease, bool cPlusPlusIdentifier, bool javaIdentifier, string employeeName, int employeeID, string employeePhoneNum, int employeeAge, char employeeGender, string employeeJobTitle, float employeeSalary, string employeeHireDate) : Employee(employeeName, employeeID, employeePhoneNum, employeeAge, employeeGender, employeeJobTitle, employeeSalary, employeeHireDate)
{
	this->departmentNum = departmentNum;
	this->supervisorName = supervisorName;
	this->percentLastSalaryIncrease = percentLastSalaryIncrease;
	this->cPlusPlusIdentifier = cPlusPlusIdentifier;
	this->javaIdentifier = javaIdentifier;
}

Programmer::~Programmer()
{

}

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

void Programmer::displayEmployeeInfo()
{
	cout << "Name: " << employeeName << endl;
	cout << "Employee ID: " << employeeID << endl;
	cout << "Phone: " << employeePhoneNum << endl;
	cout << "Age: " << employeeAge << endl;
	cout << "Gender: " << employeeGender << endl;
	cout << "Job Title: " << employeeJobTitle << endl;
	cout << "Salary: $" << employeeSalary << endl;
	cout << "Hire Date: " << employeeHireDate << endl;
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