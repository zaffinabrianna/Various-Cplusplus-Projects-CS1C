#include "SoftwareArhitect.h"

SoftwareArchitect::SoftwareArchitect()
{
	departmentNum = 0;
	supervisorName = " ";
	percentLastSalaryIncrease = 0.0;
	yearsExperienceinSoftwareProj = 0.0;
}
SoftwareArchitect::SoftwareArchitect(int departmentNum, string supervisorName, float percentLastSalaryIncrease, float yearsExperienceinSoftwareProj, string employeeName, int employeeID, string employeePhoneNum, int employeeAge, char employeeGender, string employeeJobTitle, float employeeSalary, string employeeHireDate) : Employee(employeeName, employeeID, employeePhoneNum, employeeAge, employeeGender, employeeJobTitle, employeeSalary, employeeHireDate)
{
	this->departmentNum = departmentNum;
	this->supervisorName = supervisorName;
	this->percentLastSalaryIncrease = percentLastSalaryIncrease;
	this->yearsExperienceinSoftwareProj = yearsExperienceinSoftwareProj;
}

SoftwareArchitect::~SoftwareArchitect()
{

}

void SoftwareArchitect::setDepartmentNum(int departmentNum)
{
	this->departmentNum = departmentNum;
}
void SoftwareArchitect::setSupervisorName(string supervisorName)
{
	this->supervisorName = supervisorName;
}
void SoftwareArchitect::setPercentLastSalaryIncrease(float percentLastSalaryIncrease)
{
	this->percentLastSalaryIncrease = percentLastSalaryIncrease;
}
void SoftwareArchitect::setYearsExperienceinSoftwareProj(float yearsExperienceinSoftwareProj)
{
	this->yearsExperienceinSoftwareProj = yearsExperienceinSoftwareProj;
}

void SoftwareArchitect::displayEmployeeInfo()
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
	cout << "Years of Experience: " << yearsExperienceinSoftwareProj << endl << endl;
}