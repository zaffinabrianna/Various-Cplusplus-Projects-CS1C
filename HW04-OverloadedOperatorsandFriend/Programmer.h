#pragma once

#include "Employee.h" 

class Programmer : public Employee
{
private:
	int departmentNum;
	string supervisorName;
	float percentLastSalaryIncrease;
	bool cPlusPlusIdentifier;
	bool javaIdentifier;

public:
	Programmer();
	Programmer(int departmentNum, string supervisorName, float percentLastSalaryIncrease, bool cPlusPlusIdentifier, bool javaIdentifier, string employeeName, int employeeID, string employeePhoneNum, int employeeAge, char employeeGender, string employeeJobTitle, float employeeSalary, string employeeHireDate);

	~Programmer();

	void setDepartmentNum(int departmentNum);
	void setSupervisorName(string supervisorName);
	void setPercentLastSalaryIncrease(float percentLastSalaryIncrease);
	void setCPlusPlusIndentifier(bool cPlusPlusIdentifier);
	void setJavaIdentifier(bool javaIdentifier);

	void displayEmployeeInfo();

	//STUFF FOR HW04:
	//Uses the friend function here. Do not need func. def in cpp file since it is in main().
	friend bool areEqual(Employee& employee1, Programmer& programmer1);
};